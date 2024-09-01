from googleapiclient.discovery import build
from googleapiclient.errors import HttpError
from DataClasses.Orbat import Orbat
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
	orbat = []
	file = open("Files/localCopy.orbat", "r")

	for line in file.readlines():
		orbat.append(line.split(","))

	return Orbat(orbat)


def SaveSheet_Local(orbat : Orbat):
	file = open("Files/localCopy.orbat", "w")

	for mem in orbat:
		for column in mem:
			file.write(str(column) + ",")
		file.write("\n")

	file.flush()
	file.close()
	return True
# def SaveSheetDelta_Local():