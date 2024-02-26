/*
	Needed Mods:
	- None

	Optional Mods:
	- None
*/

// Enemy infantry classes
opfor_officer = "OPTRE_Ins_URF_Officer";			  // Officer
opfor_squad_leader = "OPTRE_Ins_URF_SquadLead";		  // Squad Leader
opfor_team_leader = "OPTRE_Ins_URF_TeamLead";		  // Team Leader
opfor_sentry = "OPTRE_Ins_URF_Rifleman_Light";		  // Rifleman (Lite)
opfor_rifleman = "OPTRE_Ins_URF_Rifleman_AR";		  // Rifleman
opfor_rpg = "OPTRE_Ins_URF_Rifleman_AT";			  // Rifleman (LAT)
opfor_grenadier = "OPTRE_Ins_URF_Grenadier";		  // Grenadier
opfor_machinegunner = "OPTRE_Ins_URF_Rifleman_Light"; // Autorifleman
opfor_heavygunner = "OPTRE_Ins_URF_Autorifleman";	  // Heavy Gunner
opfor_marksman = "OPTRE_Ins_URF_Marksman";			  // Marksman
opfor_sharpshooter = "OPTRE_Ins_URF_Marksman";		  // Sharpshooter
opfor_sniper = "OPTRE_Ins_URF_Sniper";				  // Sniper
opfor_at = "OPTRE_Ins_URF_AT_Specialist";			  // AT Specialist
opfor_aa = "OPTRE_Ins_URF_AA_Specialist";			  // AA Specialist
opfor_medic = "OPTRE_Ins_URF_Medic";				  // Combat Life Saver
opfor_engineer = "OPTRE_Ins_URF_Engineer";			  // Engineer
opfor_paratrooper = "OPTRE_Ins_URF_Crewman";		  // Paratrooper

// Enemy vehicles used by secondary objectives.
opfor_mrap = "OPTRE_M12_FAV_ins";							// M12-FAV[Ins]
opfor_mrap_armed = "OPTRE_M12_LRV_ins";						// M12 LRV (MG)[Ins]
opfor_transport_helo = "OPTRE_ins_falcon_unarmed";			// UH-144 Falcon (Unarmed, Ins)
opfor_transport_truck = "OPTRE_m1015_mule_cover_ins";		// Tempest Transport (Covered)
opfor_ammobox_transport = "OPTRE_m1015_mule_ins";			// Tempest Transport (Open) -> Has to be able to transport resource crates!
opfor_fuel_truck = "OPTRE_m1015_mule_fuel_ins";				// Tempest Fuel
opfor_ammo_truck = "OPTRE_m1015_mule_ammo_ins";				// Tempest Ammo
opfor_fuel_container = "B_Slingload_01_Fuel_F"; 			// Taru Fuel Pod
opfor_ammo_container = "B_Slingload_01_Ammo_F"; 			// Taru Ammo Pod
opfor_flag = "OPTRE_CTF_Flag_GreenINS";						// Flag

/* Adding a value to these arrays below will add them to a one out of however many in the array, random pick chance.
Therefore, adding the same value twice or three times means they are more likely to be chosen more often. */

/* Militia infantry. Lightweight soldier classnames the game will pick from randomly as sector defenders.
Think of them like garrison or military police forces, which are more meant to control the local population instead of fighting enemy armies. */
militia_squad = [
	"OPTRE_INS_ER_Assassin",
	"OPTRE_INS_ER_Deserter_GL",
	"OPTRE_INS_ER_Farmer",
	"OPTRE_INS_ER_Guerilla_AR",
	"OPTRE_INS_ER_Hacker",
	"OPTRE_INS_ER_Insurgent_BR",
	"OPTRE_INS_ER_Militia_MG",
	"OPTRE_INS_ER_Rebel_AT",
	"OPTRE_INS_ER_Surgeon",
	"OPTRE_INS_ER_Warlord"
];

// Militia vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders.
// Can also be empty for only infantry milita.
// Militia vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders.
// Can also be empty for only infantry milita.
militia_vehicles = [
	"OPTRE_M274_ATV_Ins",	 // Mongoose
	"OPTRE_M914_RV_Ins",	 // Repair hog
	"OPTRE_unarmed_puma_02", // Unarmed puma
	"OPTRE_armed_puma_02", 	 // Armed puma
	"OPTRE_AT_puma_02", 	 // Armed puma
	"OPTRE_Static_M41_Ins",	 // Warthog turret static
	"OPTRE_Static_AA_Ins"	 // Rocket Hog turret
];

// All enemy vehicles that can spawn as sector defenders and patrols at high enemy combat readiness (aggression levels).
opfor_vehicles = [
	"OPTRE_M12_LRV_ins",
	"OPTRE_M12_TD_ins",
	"OPTRE_M12A1_LRV_ins",
	"OPTRE_M12R_AA_ins",
	"OPTRE_M412_IFV_INS",
	"OPTRE_M494_INS",
	"OPTRE_scorpionins_02",
	"OPTRE_M808B2ins",
	"OPTRE_m1015_mule_mlr_ins"
];

// All enemy vehicles that can spawn as sector defenders and patrols but at a lower enemy combat readiness (aggression levels).
opfor_vehicles_low_intensity = [
	"OPTRE_M12_LRV_ins",
	"OPTRE_M12_TD_ins",
	"OPTRE_M12A1_LRV_ins",
	"OPTRE_M12R_AA_ins",
	"OPTRE_M412_IFV_INS"
];
// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at high enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles = [
	"OPTRE_M12_LRV_ins",
	"OPTRE_M12_TD_ins",
	"OPTRE_M12A1_LRV_ins",
	"OPTRE_M12R_AA_ins",
	"OPTRE_M412_IFV_INS",
	"OPTRE_M494_INS",
	"OPTRE_scorpionins_02",
	"OPTRE_M808B2ins",
	"OPTRE_m1015_mule_mlr_ins"
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at lower enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles_low_intensity = [
	"OPTRE_M12_LRV_ins",
	"OPTRE_M12_TD_ins",
	"OPTRE_M12A1_LRV_ins",
	"OPTRE_M12R_AA_ins",
	"OPTRE_M412_IFV_INS"
];

/* All vehicles that spawn within battlegroups (see the above 2 arrays) and also hold 8 soldiers as passengers.
If something in this array can't hold all 8 soldiers then buggy behaviours may occur.    */
opfor_troup_transports = [
	"OPTRE_m1015_mule_cover_ins",		   // Tempest Transport
	"OPTRE_m1015_mule_ins",			   // Tempest Transport (Covered)
	"OPTRE_Pelican_unarmed_ins",	   // Mi-290 Taru (Bench)
	"OPTRE_ins_falcon_unarmed" // Po-30 Orca (Armed)
];

// Enemy rotary-wings that will need to spawn in flight.
opfor_choppers = [
	"OPTRE_UNSC_hornet_ins",		// Mi-290 Taru (Bench)
	"OPTRE_ins_falcon", // Po-30 Orca (Armed)
	"OPTRE_UNSC_falcon_armed_S_ins", // Mi-48 Kajman
	"OPTRE_Pelican_armed_ins"
];

// Enemy fixed-wings that will need to spawn in the air.
opfor_air = [
	"OPTRE_bayonet_02", // To-199 Neophron (CAS)
	"OPTRE_gladius_02"			   // To-201 Shikra
];
