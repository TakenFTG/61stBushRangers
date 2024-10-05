'''

Since discord now only allows commands to be registered using POST requests, use this file to do that

'''

import requests
from Token import *

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

# For authorization, you can use either your bot token
headers = {
    "Authorization": "Bot " + TOKEN
}

r = requests.post(url, headers=headers, json=json)

print(r.content)
input("Press any key to contine")