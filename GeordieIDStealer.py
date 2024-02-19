import fileinput

'''
OPTIONS
'''

fileURL = "./Arma 3 Preset 61st Mod List.html"

def StealIDs():
	outputString = "serverMod=\""
	with fileinput.FileInput(fileURL) as file:
		for line in file:
			if "<a href=" in line:
				#split based on quotation marks, get the steam id string
				steamURL = line.split("\"")[1]
				#grab the id and append ';'
				modID = "@" + str(steamURL.split("?id=")[1]) + ";"
				outputString += str(modID)
	print(outputString + "\"")

StealIDs()