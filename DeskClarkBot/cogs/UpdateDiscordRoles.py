import discord
from discord.ext import commands
from discord.ext.commands import Context as context
from cogs.Helpers.Google.GoogleHelpers import *
from cogs.DataClasses.Rank import *
from cogs.DataClasses.Squad import *

class UpdateDiscordRoles(commands.Cog):
	def __init__(self, bot):
		self.bot = bot
		
	@commands.hybrid_command(name="update_discord_roles")
	async def UpdateDiscordRoles(self, ctx : context):
		sheet = GetSheet_ONLINE(Token.ORBAT_SHEET_ID, WRITE_TEMPLATE["range"])
		
		if(sheet is HttpError):
			await ctx.reply(content="An error occurred: \n" + str(sheet))
			pass

		dataSheet :DataSheet = DataSheet.GetFromSheet(sheet)
		
		#cache all squad role discord objets
		allRoleIDs = []
		for squad in AllSquads:
			if(squad.roleID == -1 or squad.roleID == None):
				continue
			allRoleIDs.append(discord.Object(id = squad.roleID))

		#cache all rank role discord objets
		for rank in AllRanks:
			if(rank.roleID == -1 or rank.roleID == None):
				continue
			allRoleIDs.append(discord.Object(id = rank.roleID))

		# for row in dataSheet._rows: 
			# await self.UpdateSingleUser(ctx, row, allRoleIDs)
		errors = []
		await self.UpdateSingleUser(ctx, dataSheet.GetRowByID(5), allRoleIDs, errors)

		ErrorMessage = ""
		for error in errors:
			ErrorMessage += str(error)

		await ctx.reply("Roles updated,\n\t>Errors: ```\n" + str(ErrorMessage) + "\n```")

		pass

	async def UpdateSingleUser(self, ctx : context, row : DataSheetRow, allRoleIDs, errors : list):
		discordID = row[DataSheetRow._DISCORD_ID]
		if discordID is None:
			return

		member = ctx.guild.get_member(discordID)
		if member is None:
			errors.append(f"Could not find ({row[DataSheetRow.ID]}, {row[DataSheetRow._FULLNAME]}) with id {row[DataSheetRow._DISCORD_ID]}")
			return

		dataSheetRank : Rank = Rank.GetRankFromString(row[DataSheetRow.RANK])
		dataSheetSquad : Squad = Squad.GetSquadFromString(row[DataSheetRow.SQUAD]) 

		# remove old roles
		for squad in allRoleIDs:
			if(squad.id == dataSheetSquad.roleID):
				savedSquadObject = squad
				allRoleIDs.remove(squad)
				break
		
		for rank in allRoleIDs:
			if(rank.id == dataSheetRank.roleID):
				savedRankObject = rank
				allRoleIDs.remove(rank)
				break

		await member.remove_roles(allRoleIDs, reason= "User not in squad or is not correct rank")
		allRoleIDs.append(savedSquadObject)
		allRoleIDs.append(savedRankObject)

		# add Squad and role to user
		await member.add_roles([discord.object(id = dataSheetSquad.roleID), discord.object(id = dataSheetRank.roleID)])

async def setup(bot):
	await bot.add_cog(UpdateDiscordRoles(bot))