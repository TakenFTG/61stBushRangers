from DataClasses import Squad
from DataClasses.OrbatRow import OrbatRow
from DataClasses.Rank import Rank
import datetime
class Orbat:
	def __init__(self, rows : OrbatRow) -> None:
		self._rows : OrbatRow = rows

	def GetRowByID(self, index : int) -> OrbatRow:
		for row in self._rows:
			if(int(row._dict[OrbatRow.ID]) == index):
				return row
		
		return None
		
	def GetColumn(self, index : int, column : int):
		return self.GetRowByID(index)[column]
	
	def GetIndexFromID(self, id : int):
		for i in range(len(self._rows)):
			if self._rows[i][OrbatRow.ID] == id:
				return i
		
		return None
	
	def SetRow(self, row : OrbatRow):
		index = self.GetIndexFromID(row[OrbatRow.ID])
		if(index != None):
			self._rows[index] = row

	def SetRowDelta(self, id : int, delta : OrbatRow):
		index = self.GetIndexFromID(id)
		if(index == None):
			pass
		
		row : OrbatRow = self._rows[index]
		delta = row.GetDelta(delta)

		for column in delta._dict.items():
			if(str(column[1]) != ""):
				row[column[0]] = column[1]

	def As2DList(self):
		returner = []
		for row in self._rows:
			returner.append(row.GetAsList())
		return returner