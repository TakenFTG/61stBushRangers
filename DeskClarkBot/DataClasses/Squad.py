
class Squad:
	def GetSquadFromString(value:str):
		if(value is None):
			return None
		
		for squad in AllSquads:
			if(value == squad.name):
				return squad
			
		return None
	
	def __init__(self, name : str, roleID : int):
		self.name = name
		self.roleID = roleID

BATTALION_STAFF = Squad("Battalion Staff", 1151871964005289984)
PLATOON_STAFF = Squad("Platoon Staff", 1151872504047079527)
ONE_ONE = Squad("1-1", 1151873472520278106)
ONE_TWO = Squad("1-2", 1151873588748636190)
ONE_THREE = Squad("1-3", 1276915652149379116)
WAITING = Squad("Waiting for Slot", 1151873648446152725)
RESERVE = Squad("Reserve", 1151873648446152725)
TRAINEE = Squad("Trainee", -1)

PILOT = Squad("Pilot", 1194190569702961262)

MIA = Squad("MIA", -1)
KIA = Squad("KIA", -1)

AllSquads = [
	BATTALION_STAFF, PLATOON_STAFF, ONE_ONE, ONE_TWO, ONE_THREE, WAITING, RESERVE, TRAINEE,
	PILOT,
	MIA, KIA
	]