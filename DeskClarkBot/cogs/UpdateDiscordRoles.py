import discord
from discord.ext import commands
from discord import app_commands, Guild
from discord.app_commands.commands import AppCommandContext as AppContext
from discord.ext.commands import Context as Context
from discord import Interaction
from cogs.Helpers.Google.GoogleHelpers import *
from cogs.DataClasses.Rank import *
from cogs.DataClasses.Squad import *

class UpdateDiscordRoles(commands.Cog):
	def __init__(self, bot):
		self.bot = bot
		
	# @commands.hybrid_command(name="update_discord_roles")
	@app_commands.command(name = "update_discord_roles")
	async def UpdateDiscordRoles(self, ctx : Interaction):
		sheet = GetSheet_ONLINE(Token.ORBAT_SHEET_ID, WRITE_TEMPLATE["range"])
		
		if(sheet is HttpError):
			await ctx.message.reply(content="An error occurred: \n" + str(sheet))
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

		errors = []
		await ctx.message.reply(content="Updating roles, wait one this may take a minute. (And i mean it may take a minute)")
		if "options" in ctx.data and ctx.data["options"] is not None and len(ctx.data["options"]) > 0:
			for orbatID in ctx.data["options"][0]["value"].split(","):
				if orbatID is not int:
					continue
				await self.UpdateSingleUser(ctx.guild, dataSheet.GetRowByID(int(orbatID)), allRoleIDs, errors)

		else:
			await ctx.channel.send("disabled all unit updating while testing")
			await self.UpdateSingleUser(ctx.guild, dataSheet.GetRowByID(5), allRoleIDs, errors)

			# for row in dataSheet._rows:
				# 	await self.UpdateSingleUser(ctx, row, allRoleIDs, errors)

		ErrorMessage = ""
		for error in errors:
			ErrorMessage += str(error) + "\n"

		await ctx.channel.send("Roles updated " + str(ctx.message.author.mention) + ",\n\t>Errors: ```\n" + str(ErrorMessage) + "\n```")

		pass

	async def UpdateSingleUser(self, guild : Guild, row : DataSheetRow, allRoleIDs, errors : list):
		discordID = row._dict[DataSheetRow._DISCORD_ID]
		if discordID is None:
			return
		if discordID is not int:
			errors.append(f"-> Could not find ({row._dict[DataSheetRow.ID]}, {row._dict[DataSheetRow._FULLNAME]}) with id {row._dict[DataSheetRow._DISCORD_ID]}, > id is not int")

		member = guild.get_member(int(discordID))
		if member is None:
			errors.append(f"-> Could not find ({row._dict[DataSheetRow.ID]}, {row._dict[DataSheetRow._FULLNAME]}) with id {row._dict[DataSheetRow._DISCORD_ID]}")
			return

		dataSheetRank : Rank = Rank.GetRankFromString(row._dict[DataSheetRow.RANK])
		dataSheetSquad : Squad = Squad.GetSquadFromString(row._dict[DataSheetRow.SQUAD]) 

		# remove old roles
		savedSquadObject = None
		for squad in allRoleIDs:
			if(squad.id == dataSheetSquad.roleID):
				savedSquadObject = squad
				allRoleIDs.remove(squad)
				break

		savedRankObject = None
		for rank in allRoleIDs:
			if(rank.id == dataSheetRank.roleID):
				savedRankObject = rank
				allRoleIDs.remove(rank)
				break

		await member.remove_roles(*allRoleIDs, reason= "User not in squad or is not correct rank")

		if savedSquadObject is not None:
			allRoleIDs.append(savedSquadObject)

		if savedRankObject is not None:
			allRoleIDs.append(savedRankObject)

		# add Squad and role to user
		await member.add_roles(savedRankObject, savedSquadObject)

async def setup(bot):
	await bot.add_cog(UpdateDiscordRoles(bot))