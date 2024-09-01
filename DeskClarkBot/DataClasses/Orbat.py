from DataClasses import Squad
from DataClasses.Rank import Rank
import datetime

# ID = "id"
# SQUAD = "Squad"
# RANK = "Rank"
# USERNAME = "UserName"
# FULLNAME = "_FullName"
# JOIN_DATE = "JoinedDate"
# SLOT_DATE = "SlottedDate"
# LAST_PROMOTED = "LastPromoted"
# _TIU = "_TimeInUnit"
# LMA = "LastMissionActive"
# _TSA = "_TimeSinceActive"
# _TSP = "_TimeSincePromotion"
# MRAR = "MissionsRanAsRank"
# _WEEKS_SINCE_LMA = "_WeeksSinceLastMissionActive"
# AWOL = "AbsenceWithoutLeave"

class Orbat:	
	ID = 0
	SQUAD = 1
	RANK = 2
	USERNAME = 3
	_FULLNAME = 4
	JOIN_DATE = 5
	SLOT_DATE = 6
	LAST_PROMOTED = 7
	_TIU = 8
	LMA = 9
	_TSA = 10
	_TSP = 11
	MRAR = 12
	_WEEKS_SINCE_LMA = 13
	AWOL = 14

	def __init__(self, rows : list) -> None:
		self._rows = rows

	def GetRowByID(self, index : int):
		return self._rows[index-1]
		
	def GetColumn(self, index : int, column : int):
		return self._rows[index][column]

def GetRow(id : int, Squad : Squad, Rank : Rank, UserName : str, JoinedDate : datetime, SlottedDate : datetime, LastPromoted : datetime, TimeInUnit : int, LastMissionActive : datetime, TimeSinceActive : int, TimeSincePromotion : int, MissionsRanAsRank : int, WeeksSinceLMA : int, AbsentWithoutLeave : int):
	return {
		"id" : id,
		"Squad" : Squad,
		"Rank" : Rank,
		"UserName" : UserName,
		"_FullName" : Rank + ". " + UserName,
		"JoinedDate" : JoinedDate,
		"SlottedDate" : SlottedDate,
		"LastPromoted" : LastPromoted,
		"_TimeInUnit" : TimeInUnit,
		"LastMissionActive" : LastMissionActive,
		"_TimeSinceActive" : TimeSinceActive,
		"_TimeSincePromotion" : TimeSincePromotion,
		"MissionsRanAsRank" : MissionsRanAsRank,
		"_WeeksSinceLastMissionActive" : WeeksSinceLMA,
		"AbsenceWithoutLeave" : AbsentWithoutLeave
	}