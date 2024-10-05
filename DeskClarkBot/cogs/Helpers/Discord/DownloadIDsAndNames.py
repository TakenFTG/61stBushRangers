from discord.ext.commands import Context as context

def DownloadDiscordIDsAndNames(ctx : context):
	MemberNicknames = {}

	for member in ctx.guild.members:
		if member.nick is not None:
			MemberNicknames.update({member.nick : member.id})
		else:
			MemberNicknames.update({member.name : member.id})

	file = open("Files/discord-name-id-mappings.txt", "w")

	for mem in MemberNicknames.keys():
		file.write(str(mem) + ":" + str(MemberNicknames[mem]) + "\n")

	return True