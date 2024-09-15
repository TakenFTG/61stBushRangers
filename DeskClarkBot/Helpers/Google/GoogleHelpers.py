from googleapiclient.discovery import build
from googleapiclient.errors import HttpError
from DataClasses.Orbat import Orbat
from DataClasses.OrbatRow import OrbatRow
from Helpers.Google.LoadCreds import load_credentials
import Token

def GetSheet_ONLINE(spreadsheet_id, range_name):
	creds = load_credentials()

	try:
		service = build("sheets", "v4", credentials=creds)

		result = (
			service.spreadsheets()
			.values()
			.get(spreadsheetId=spreadsheet_id, range=range_name)
			.execute()
		)
		rows = result.get("values", [])
		print(f"{len(rows)} rows retrieved")
		return rows
  
	except HttpError as error:
		print(f"An error occurred: {error}")
		return error
  
def GetSheet_LOCAL():
	return Orbat(ReadORBATCSV("localCopy", "orbat"))

def GetSheet_DELTA():
	return Orbat(ReadORBATCSV("delta", "orbat"))

def SaveSheet_Local(orbat : Orbat):
	return WriteORBAT("localCopy", orbat)

def SaveSheet_DELTA(orbat : Orbat):
	return WriteORBAT("delta", orbat)

def ReadCSV(fileName : str, extension: str, seperator = ","):
	orbat = []
	file = open("Files/" + str(fileName) + "." + str(extension), "r")

	for line in file.readlines():
		orbat.append(line.strip().split(seperator))

	return orbat

def ReadORBATCSV(fileName : str, extension: str, seperator = ","):
	orbat = []
	file = open("Files/" + str(fileName) + "." + str(extension), "r")

	for line in file.readlines():
		orbat.append(OrbatRow(values = line.strip().split(seperator)))

	return orbat

def WriteORBAT(fileName : str, orbat : Orbat):
	file = open("Files/" + str(fileName) + ".orbat", "w")

	for mem in orbat:
		for column in mem:
			file.write(str(column) + ",")
		file.write("\n")

	file.flush()
	file.close()
	return True


WRITE_TEMPLATE = {
	"range": "DataSheet!B3:Q500",
	"majorDimension":"ROWS",
	"values": [],
}
# def SaveSheetDelta_Local():