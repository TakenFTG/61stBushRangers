from cogs.MissionSubmission import MissionSubmission
import discord
from discord.ext import commands

intents = discord.Intents.default()
intents.message_content = True
contexts = discord.app_commands.AppCommandContext()
contexts.guild = True
contexts.private_channel = True

bot = commands.Bot(command_prefix="-",allowed_contexts=contexts, description= 'Test', intents = intents)

#allowed_contexts = 

@bot.event
async def on_ready():
	message = "Commands are as follows:\n"
	for command in bot.commands :
		message += "-> " + str(command.name) + "\n"
	message += "Cogs are as follows:\n"
	for cog in bot.cogs:
		message += "-> " + str(cog.title) + "\n"
	print("Bot is live\n" + message)

@bot.event
async def on_message(message):
	if message.author == bot.user:
		return

	if message.content.startswith('$hello'):
		await message.channel.send('Hello!')
		
@bot.command(name="list")
async def _List(ctx):
	print("Recieved message")
	message = "Commands are as follows:\n"
	for command in bot.commands :
		message += "-> " + command + "\n"
	message += "Cogs are as follows:\n"
	for cog in bot.cogs:
		message += "-> " + cog + "\n"
	await ctx.channel.send(message)

@bot.command(name="test")
async def _test(ctx):
	message = "Commands are as follows:\n"
	for command in bot.commands :
		message += "-> " + str(command.name) + "\n"
	message += "Cogs are as follows:\n"
	for cog in bot.cogs:
		message += "-> " + str(cog.title) + "\n"
	await ctx.channel.send(message)


bot.add_cog(MissionSubmission(bot))
# bot.add_command(_UniqueName)

bot.run('MTI1NjQ0MzU2NDIxMzI3MjU5Nw.GSBdmq.rLJkQj0Ojis_rH6khIYQkH6gxiNWOeyh0X-gd0')