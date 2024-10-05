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

cogs = ["cogs.UpdateOrbat",
		"cogs.MissionSubmission",
		"cogs.AddToMemberOrbat",
		"cogs.UpdateDiscordRoles"]

@bot.event
async def on_ready():
	# Here we load our extensions(cogs) listed above in [initial_extensions].
	if __name__ == '__main__':
		for extension in cogs:
			await bot.load_extension(extension)

	message = "Tree Commands are as follows:\n"
	for command in bot.tree.get_commands():
		message += "-> " + str(command.name) + "\n"

	message += "Cog Commands are as follows:\n"
	for cogName in bot.cogs:
		message += "> " + cogName.capitalize() + ":\n"
		for command in bot.get_cog(cogName).get_commands():
			message += "-> " + command.name + "\n"
		message += "\n"

	print("Bot is live\n" + message + "\n\n")

bot.run(TOKEN)