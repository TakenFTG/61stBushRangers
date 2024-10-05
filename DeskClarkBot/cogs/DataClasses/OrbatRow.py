from .Squad import Squad
from .Rank import Rank

class DataSheetRow:	
	ID = "id"
	SQUAD = "Squad"
	RANK = "Rank"
	USERNAME = "UserName"
	_FULLNAME = "_FullName"
	JOIN_DATE = "JoinedDate"
	SLOT_DATE = "SlottedDate"
	LAST_PROMOTED = "LastPromoted"
	_TIU = "_TimeInUnit"
	LMA = "LastMissionActive"
	_TSA = "_TimeSinceActive"
	_TSP = "_TimeSincePromotion"
	MRAR = "MissionsRanAsRank"
	_WEEKS_SINCE_LMA = "_WeeksSinceLastMissionActive"
	AWOL = "AbsenceWithoutLeave"
	_DISCORD_ID = "_DiscordID"

	# def __init__(self, id : int, Squad : Squad, Rank : Rank, UserName : str, JoinedDate : datetime, SlottedDate : datetime, LastPromoted : datetime, TimeInUnit : int, LastMissionActive : datetime, TimeSinceActive : int, TimeSincePromotion : int, MissionsRanAsRank : int, WeeksSinceLMA : int, AbsentWithoutLeave : int, DiscordID : int):
	# 	self._dict = {
	# 		"id" : id,
	# 		"Squad" : Squad,
	# 		"Rank" : Rank,
	# 		"UserName" : UserName,
	# 		"_FullName" : Rank + ". " + UserName,
	# 		"JoinedDate" : JoinedDate,
	# 		"SlottedDate" : SlottedDate,
	# 		"LastPromoted" : LastPromoted,
	# 		"_TimeInUnit" : TimeInUnit,
	# 		"LastMissionActive" : LastMissionActive,
	# 		"_TimeSinceActive" : TimeSinceActive,
	# 		"_TimeSincePromotion" : TimeSincePromotion,
	# 		"MissionsRanAsRank" : MissionsRanAsRank,
	# 		"_WeeksSinceLastMissionActive" : WeeksSinceLMA,
	# 		"AbsenceWithoutLeave" : AbsentWithoutLeave,
	# 		"_DiscordID" : DiscordID
	# 	}

	def __init__(self, values:list = None):
		if(values == None):
			values = []

		if(len(values) < 16):
			for i in range(16 - len(values)):
				values.append(None)

		self._dict = {
			"id" : values[0],
			"Squad" : values[1],
			"Rank" : values[2],
			"UserName" : values[3],
			"_FullName" : values[4],
			"JoinedDate" : values[5],
			"SlottedDate" : values[6],
			"LastPromoted" : values[7],
			"_TimeInUnit" : values[8],
			"LastMissionActive" : values[9],
			"_TimeSinceActive" : values[10],
			"_TimeSincePromotion" : values[11],
			"MissionsRanAsRank" : values[12],
			"_WeeksSinceLastMissionActive" : values[13],
			"AbsenceWithoutLeave" : values[14],
			"_DiscordID" : values[15]
		}

	def __str__(self) -> str:
		message = ""
		for key in self._dict.values():
			message += str(key) + ", "
		return message
	
	def GetDelta(self, other : 'DataSheetRow'):
		delta = DataSheetRow()
		for key in self._dict.keys():
			if(self._dict[key] != other._dict[key] or key == DataSheetRow.ID):
				delta._dict[key] = other._dict[key]
		return delta
	
	def GetAsList(self):
		return list(self._dict.values())