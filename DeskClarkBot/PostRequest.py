'''

Since discord now only allows commands to be registered using POST requests, use this file to do that

'''

import requests
from Token import *

def CreateCommand():
	url = "https://discord.com/api/v10/applications/" + str(APP_ID) + "/guilds/" + str(GUILD_ID) + "/commands"

	# This is an example USER command, with a type of 2
	json = {
		"name": "update_discord_roles",
		"type": 1,
		"guild_id": GUILD_ID,
		"description": "Update Roles within the unit, Will update all roles if no Orbat ID is provided",
		"options": [
			{
				"name": "orbat_id",
				"description": "Used to update only a single members roles",
				"type" : 4,
				"required" : False,
				"autocomplete" : False
			}
		]
	}
	return url, json

def GetAllCommands():
	url = "https://discord.com/api/v10/applications/" + str(APP_ID) + "/guilds/" + str(GUILD_ID) + "/commands"

	# This is an example USER command, with a type of 2
	json = {}
	return url, json

def EditCommand():
	url = "https://discord.com/api/v10/applications/" + str(APP_ID) + "/guilds/" + str(GUILD_ID) + "/commands/" + str(CMD_ID_UPDATE_DISCORD_ROLES)

	# This is an example USER command, with a type of 2
	json = {
		"description": "Update Roles within the unit, Will update all roles if no Orbat IDs are provided",
		"options": [
			{
				"name": "orbat_ids",
				"description": "Used to update only specific members roles. Separate with commas ','",
				"type" : 3,
				"required" : False,
				"autocomplete" : False
			}
		]
	}
	return url, json

# For authorization, you can use either your bot token
headers = {
    "Authorization": "Bot " + TOKEN
}

command = EditCommand()

# r = requests.get(command[0], headers=headers)
# r = requests.post(command[0], headers=headers, json=command[1])
r = requests.patch(command[0], headers=headers, json=command[1])

print(r.content)
input("Press enter key to contine")