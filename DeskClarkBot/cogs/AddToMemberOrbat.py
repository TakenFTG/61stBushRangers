import discord
from discord.ext import commands

class AddMemberToOrbat(commands.Cog):
	def __init__(self, bot):
		self.bot = bot
		
	@commands.command()
	async def AddMemberToOrbat(self, ctx):
		print("Adding member to orbat")

async def setup(bot):
	await bot.add_cog(AddMemberToOrbat(bot))