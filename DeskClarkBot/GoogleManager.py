
from requests import HTTPError
from DataClasses.Orbat import Orbat
from Helpers.Google.GoogleHelpers import *
import Token

class GoogleManager():
	def __init__(self) -> None:
		self.orbat = GetSheet_LOCAL()
		pass

	def UpdateLocalCopy():
		if __name__ == "__main__":
			# Pass: spreadsheet_id, and range_name
			sheet = GetSheet_ONLINE(Token.ORBAT_SHEET_ID, "DataSheet!B3:Q100")

			if sheet is HTTPError:
				print(sheet)
				pass

			SaveSheet_Local(sheet)

print(GoogleManager().orbat.GetRowByID(5))