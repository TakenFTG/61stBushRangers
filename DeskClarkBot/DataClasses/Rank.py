class Rank:
	def __init__(self, name : str, MRAR : int, abreviation : str):
		self.name = name
		self.MRAR = MRAR
		self.abreviation = abreviation

	def EligibleForPromotion(self, MRAR: int):
		if self in Officers:
			pass

		if self.MRAR == 0:
			pass

		return self.MRAR <= MRAR
	
# Enlisted
APP = Rank("Applicant", 0, "App")
RCT = Rank("Recruit", 1, "Rct")
PVT = Rank("Private", 3, "Pvt")
PFC = Rank("Private First Class", 3, "Pfc")
LCPL = Rank("Lance Corporal", 3, "LCpl")
CPL = Rank("Corporal", 3, "Cpl")
SGT = Rank("Sergent", 3, "Sgt")
S_SGT = Rank("Staff Sergent", 3, "SSgt")
GY_SGT = Rank("Gunnery Sergent", 3, "GYSgt")
FST_SGT = Rank("First Sergent", 3, "1stSgt")
SGT_MAJOR = Rank("Sergent Major", 0, "Sgt Major")

Enlisted = [APP, RCT, PVT, PFC, LCPL, CPL, SGT, S_SGT, GY_SGT, FST_SGT, SGT_MAJOR]

# Officer
SND_LT = Rank("Second Lieutenant", 0, "2Lt")
FST_LT = Rank("First Lietenant", 0, "1Lt")
CAPT = Rank("Captain Lieutenant", 0, "Capt")
MAJOR = Rank("Major", 0, "Major")

Officers = [SND_LT, FST_LT, CAPT, MAJOR]

# Medics
RCORP = Rank("Recruit Corpsman", 1, "RCorp")
CORP = Rank("Corpsman", 3, "Corp")
CORPFC = Rank("Corpsman First Class", 3, "CorpFC")
C_CORP = Rank("Chief Corpsman", 3, "CCorp")
MC_CORP = Rank("Master Chief Corpsman", 0, "MCCorp")

Medics = [RCORP, CORP, CORPFC, C_CORP, MC_CORP]

# Pilots
PR = Rank("Pilot Recruit", 1, "PR")
PLTOFF = Rank("Pilot Officer", 3, "PLTOFF")
FLGOFF = Rank("Flying Officer", 3, "FLGOFF")
WOFF = Rank("Warrant Officer", 3, "WOFF")
FLTLT = Rank("Flight Lieutenant", 3, "FLTLT")
SQNLDR = Rank("Squadron Leader", 0, "SQNLDR")

Pilots = [PR, PLTOFF, FLGOFF, WOFF, FLTLT, SQNLDR]