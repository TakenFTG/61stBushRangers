def PrintOrbatID():

	file = open("Files/OrbatID-DiscordID.txt", "r")
	map = []
	for line in file.readlines():
		map.append([line.split(":")[0], line.split(":")[1]])

	file = open("Files/name-id-mappings.txt", "r")
	names = []
	for line in file.readlines():
		names.append([line.split(":")[0], line.split(":")[1]])

	map.sort()

	message = ""
	# for orbatID, discordID in map:
	for mapDict in map:
		orbatID = mapDict[0]
		discordID = mapDict[1]
		
		nameDict = None
		# for name, discordNameID in names:
		for name in names:
			if(discordID == name[1]):
				nameDict = name
			
		if(nameDict == None):
			message += "-> " + discordID + " was not found in name-id map"
			continue

		if(orbatID == "-"):
			message += "not in orbat: "
		else:
			message += orbatID + ": "

		message += nameDict[0] + "\n"
		
	return message