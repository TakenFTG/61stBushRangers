from DataClasses import Squad
from DataClasses.OrbatRow import DataSheetRow
from DataClasses.Rank import Rank
import datetime
class DataSheet:
	def __init__(self, rows : DataSheetRow) -> None:
		self._rows : DataSheetRow = rows

	def GetRowByID(self, index : int) -> DataSheetRow:
		for row in self._rows:
			if(int(row._dict[DataSheetRow.ID]) == index):
				return row
		
		return None
		
	def GetColumn(self, index : int, column : int):
		return self.GetRowByID(index)[column]
	
	def GetIndexFromID(self, id : int):
		for i in range(len(self._rows)):
			if self._rows[i][DataSheetRow.ID] == id:
				return i
		
		return None
	
	def SetRow(self, row : DataSheetRow):
		index = self.GetIndexFromID(row[DataSheetRow.ID])
		if(index != None):
			self._rows[index] = row

	def SetRowDelta(self, id : int, delta : DataSheetRow):
		index = self.GetIndexFromID(id)
		if(index == None):
			pass
		
		row : DataSheetRow = self._rows[index]
		delta = row.GetDelta(delta)

		for column in delta._dict.items():
			if(str(column[1]) != ""):
				row[column[0]] = column[1]

	def As2DList(self):
		returner = []
		for row in self._rows:
			returner.append(row.GetAsList())
		return returner