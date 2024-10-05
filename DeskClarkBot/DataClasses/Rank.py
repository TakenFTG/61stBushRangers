class Rank:
	def GetRankFromString(value : str):
		for rank in AllRanks:
			if(value == rank.abreviation):
				return rank
		return None
	
	def __init__(self, name : str, MRAR : int, abreviation : str, roleID : int):
		self.name = name
		self.MRAR = MRAR
		self.abreviation = abreviation
		self.roleID = roleID

	def EligibleForPromotion(self, MRAR: int):
		if self in Officers:
			pass

		if self.MRAR == 0:
			pass

		return self.MRAR <= MRAR
		
# Enlisted
APP = Rank("Applicant", 0, "App", 1152882316063023144)
RCT = Rank("Recruit", 1, "Rct", 1235576341349400626)
PVT = Rank("Private", 3, "Pvt", 1235576374442332190)
PFC = Rank("Private First Class", 3, "Pfc", 1235576406210252840)
LCPL = Rank("Lance Corporal", 3, "LCpl", 1235576474577408061)
CPL = Rank("Corporal", 3, "Cpl", 1235576520614084628)
SGT = Rank("Sergent", 3, "Sgt", 1235576566201712702)
S_SGT = Rank("Staff Sergent", 3, "SSgt", 1235576592198139914)
GY_SGT = Rank("Gunnery Sergent", 3, "GYSgt", 1235576619251400735)
FST_SGT = Rank("First Sergent", 3, "1stSgt", 1235576661529858108)
SGT_MAJOR = Rank("Sergent Major", 0, "Sgt Major", 1235576701099049000)

Enlisted = [APP, RCT, PVT, PFC, LCPL, CPL, SGT, S_SGT, GY_SGT, FST_SGT, SGT_MAJOR]

# Officer
SND_LT = Rank("Second Lieutenant", 0, "2Lt", 1235577181527216199)
FST_LT = Rank("First Lietenant", 0, "1Lt", 1235577227408703588)
CAPT = Rank("Captain Lieutenant", 0, "Capt", 1235577248824823908)
MAJOR = Rank("Major", 0, "Major", 1210942110241398844)

Officers = [SND_LT, FST_LT, CAPT, MAJOR]

# Medics
RCORP = Rank("Recruit Corpsman", 1, "RCorp", 1235576765607313550)
CORP = Rank("Corpsman", 3, "Corp", 1235576797156872202)
CORPFC = Rank("Corpsman First Class", 3, "CorpFC", 1235576837602541600)
C_CORP = Rank("Chief Corpsman", 3, "CCorp", 1235576873526755388)
MC_CORP = Rank("Master Chief Corpsman", 0, "MCCorp", 1235574239747248240)

Medics = [RCORP, CORP, CORPFC, C_CORP, MC_CORP]

# Pilots
PR = Rank("Pilot Recruit", 1, "PR", 1235576909124075541)
PLTOFF = Rank("Pilot Officer", 3, "PLTOFF", 1235576931077062738)
FLGOFF = Rank("Flying Officer", 3, "FLGOFF", 1235576960042795148)
WOFF = Rank("Warrant Officer", 3, "WOFF", 1235577024823955568)
FLTLT = Rank("Flight Lieutenant", 3, "FLTLT", 1235576994167521310)
SQNLDR = Rank("Squadron Leader", 0, "SQNLDR", 1235577051210190938)

Pilots = [PR, PLTOFF, FLGOFF, WOFF, FLTLT, SQNLDR]

AllRanks = [
	APP, RCT, PVT, PFC, LCPL, CPL, SGT, S_SGT, GY_SGT, FST_SGT, SGT_MAJOR,
	SND_LT, FST_LT, CAPT, MAJOR,
	RCORP, CORP, CORPFC, C_CORP, MC_CORP,
	PR, PLTOFF, FLGOFF, WOFF, FLTLT, SQNLDR
	]