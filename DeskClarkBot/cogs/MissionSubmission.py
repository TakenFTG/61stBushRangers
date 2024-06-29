import discord
from discord.ext import commands
class MissionSubmission(commands.Cog):
	def __init__(self, bot):
		self.bot = bot

	@commands.command()
	async def run(self, ctx, *, member: discord.Member = None):
		await ctx.send("Testing")