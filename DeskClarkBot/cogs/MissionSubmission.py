import discord
from discord.ext import commands

class MissionSubmission(commands.Cog):
	def __init__(self, bot):
		self.bot = bot

	# @commands.command(name="updateorbat")
	# async def updateorbat(self, ctx):
	# 	await ctx.send("MissionSubmission.updateorbat working")

def setup(bot):
	bot.add_cog(MissionSubmission(bot))
	print("Setup from Mission Submission")