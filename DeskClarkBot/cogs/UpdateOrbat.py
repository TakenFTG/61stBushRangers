import discord
from discord.ext import commands
from discord.ext.commands import Context as context

from Helpers.Discord.PrintOrbatID import PrintOrbatID
from Helpers.Discord.DownloadIDsAndNames import DownloadDiscordIDsAndNames

class UpdateOrbat(commands.Cog):
	def __init__(self, bot):
		self.bot = bot

	async def getOrbatUsernames(self, ctx : context):
		await ctx.channel.send('Downloading names')
		DownloadDiscordIDsAndNames()
		await ctx.channel.send('Names downloaded')
		return True
	
	@commands.hybrid_command()
	async def updateorbat(self, ctx : context):
		await ctx.channel.send('Update Orbat triggered')
		# worked = await self.getOrbatUsernames(ctx)

		# if(worked):
		# 	await ctx.reply("worked")
		# else:
		# 	await ctx.reply("didn't worked")

		await ctx.reply(PrintOrbatID())



async def setup(bot):
	await bot.add_cog(UpdateOrbat(bot))