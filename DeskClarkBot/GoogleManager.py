
from requests import HTTPError
from cogs.DataClasses.Orbat import DataSheet
from cogs.DataClasses.OrbatRow import DataSheetRow
from cogs.Helpers.Google import GoogleHelpers
from cogs.Helpers.Google.GoogleHelpers import *
import Token

class GoogleManager():
	def __init__(self) -> None:
		self.orbat = GetSheet_LOCAL()
		# self.delta = GetSheet_DELTA()
		pass

	def UpdateLocalCopy():
		if __name__ == "__main__":
			# Pass: spreadsheet_id, and range_name
			sheet = GetSheet_ONLINE(Token.ORBAT_SHEET_ID, "DataSheet!B3:Q500")

			if sheet is HTTPError:
				print(sheet)
				pass

			SaveSheet_Local(sheet)

	def UpdateLocalDelta(self, id : int, column : int, value : str):
		row = self.orbat.GetRowByID(id)

mapping = GoogleHelpers.ReadCSV("OrbatID-DiscordID", "txt", ":")
dataSheet : DataSheet = GoogleManager().orbat
deltaDataSheet = DataSheet([])
for row in mapping:
	if row[0] == "-":
		continue
	delta = DataSheetRow([row[0],None,None,None,None,None,None,None,None,None,None,None,None,None,None,row[1]])
	delta = dataSheet.GetRowByID(int(row[0])).GetDelta(delta)
	deltaDataSheet._rows.append(delta)
	# print(delta)

unsortedDeltaOrbat = deltaDataSheet
deltaDataSheet = DataSheet([])
for rowIndex in range(len(dataSheet._rows)):
	deltaDataSheet._rows[rowIndex] = unsortedDeltaOrbat.GetRowByID(dataSheet._rows[rowIndex]._dict[DataSheetRow.ID])

# print(orbat.GetRowByID(5))
writePayload = GoogleHelpers.WRITE_TEMPLATE

writePayload["values"] = deltaDataSheet.As2DList()

print(writePayload)

# print(GoogleManager().delta.)