
from requests import HTTPError
from DataClasses.Orbat import Orbat
from DataClasses.OrbatRow import OrbatRow
from Helpers.Google import GoogleHelpers
from Helpers.Google.GoogleHelpers import *
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
orbat : Orbat = GoogleManager().orbat
deltaOrbat = Orbat([])
for row in mapping:
	if row[0] == "-":
		continue
	delta = OrbatRow([row[0],None,None,None,None,None,None,None,None,None,None,None,None,None,None,row[1]])
	delta = orbat.GetRowByID(int(row[0])).GetDelta(delta)
	deltaOrbat._rows.append(delta)
	# print(delta)

unsortedDeltaOrbat = deltaOrbat
deltaOrbat = Orbat([])
for rowIndex in range(len(orbat._rows)):
	deltaOrbat._rows[rowIndex] = unsortedDeltaOrbat.GetRowByID(orbat._rows[rowIndex]._dict[OrbatRow.ID])

# print(orbat.GetRowByID(5))
writePayload = GoogleHelpers.WRITE_TEMPLATE

writePayload["values"] = deltaOrbat.As2DList()

print(writePayload)

# print(GoogleManager().delta.)