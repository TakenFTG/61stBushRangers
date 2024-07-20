from cogs.MissionSubmission import MissionSubmission
import discord
import discord.app_commands
from discord.ext import commands
from Token import *
from discord.ext.commands import Context as context


intents = discord.Intents.all()
intents.message_content = True
contexts = discord.app_commands.AppCommandContext()
contexts.guild = True
contexts.private_channel = True

bot = commands.Bot(command_prefix="/",allowed_contexts=contexts, intents = intents)

@bot.event
async def on_ready():
	
	message = "Tree Commands are as follows:\n"
	for command in bot.tree.get_commands():
		message += "-> " + str(command.name) + "\n"
	
	message += "Bot commands are as follows:\n"
	for command in bot.commands:
		message += "-> " + str(command) + "\n"

	print("Bot is live\n" + message + "\n\n")

@bot.event
async def on_message(ctx):
	if ctx.author == bot.user:
		return
	
	if not ctx.content.startswith(bot.command_prefix):
		return

	command = ctx.content[1:].lower()
	args = command.split(" ")

	if args[0] in commandList:
		await commandList[args[0]](ctx)

@bot.tree.command()
async def updateorbat(ctx : context):
	# if 1202540346970472478 not in ctx.user.roles:
	# 	await ctx.channel.send('You have no power here, ' + str(ctx.user.roles))
	# else:
	await ctx.channel.send('Update Orbat triggered')
	worked = await getOrbatUsernames(ctx)

	if(worked):
		await ctx.response.send_message("worked")
	else:
		await ctx.response.send_message("didn't worked")

async def helpFunc(ctx):
	await ctx.channel.send('-> test: function i am working on currently\n-> help: this command, good luck finding it')

async def getOrbatUsernames(ctx : context):
	await ctx.channel.send('Downloading names')

	MemberNicknames = {}

	for member in ctx.guild.members:
		if member.nick is not None:
			MemberNicknames.update({member.nick : member.id})
		else:
			MemberNicknames.update({member.name : member.id})

	file = open("Files/name-id-mappings.txt", "w")

	for mem in MemberNicknames.keys():
		file.write(str(mem) + ":" + str(MemberNicknames[mem]) + "\n")

	file.close()
	await ctx.channel.send('Names downloaded')
	return True

	

commandList = {"test" : getOrbatUsernames, "help" : helpFunc} 

bot.run(TOKEN)