class XtdGearModels
{
	class CfgWeapons
	{
		class BR_CH252D
		{
			options[]=
			{
				"Visor",
				"Custom"
			};
			label="[61st] CH252D";
			class Custom
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{
					"Base",
					"Reaper"
				};
				class Base
				{
					label="Base";
				};
				class Reaper
				{
					label="Reaper";
				};
			};
			class Visor
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Visor";
				values[]=
				{
					"None"
//					"Blue",
//					"Gold",
//					"Silver"
				};
				class None
				{
					label="Base";
				};
/*
				class Blue
				{
					label="Blue";
				};
				class Gold
				{
					label="Gold";
				};
				class Silver
				{
					label="Silver";
				};
*/
			};
		};
		
		class BR_M52D_Rifleman
		{
			options[]=
			{
				"Custom",
				"Variant"
			};
			label="[61st] M52D Body Armour";
			class Custom
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{
					"Base",
//					"Hiruko",
//					"Phoenix",
					"Reaper"
//					"Warhound"
				};
				class Base
				{
					label="Base";
				};
//				class Hiruko
//				{
//					label="Hiruko";
//				};
//				class Phoenix
//				{
//					label="Phoenix";
//				};
				class Reaper
				{
					label="Reaper";
				};
//				class Warhound
//				{
//					label="Warhound";
//				};
			};
			class Variant
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Variant";
				values[]=
				{
					"Demolitions",
					"Marksman",
					"Scout",
					"Sniper",
					"Rifleman"
				};
				class Demolitions
				{
					label="Demolitions";
				};
				class Marksman
				{
					label="Marksman";
				};
				class Scout
				{
					label="Scout";
				};
				class Sniper
				{
					label="Sniper";
				};
				class Rifleman
				{
					label="Rifleman";
				};
			};
		};
	};
	class CfgVehicles
	{	
		class BR_ICLS_BACKPACK
		{
			options[]=
			{
				"Type",
				"Colour"
			};
			label="[61st] ILCS Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Basic",
					"Medic",
					"Heavy"
				};
				class Basic
				{
					label="Basic";
				};
				class Medic
				{
					label="Medic";
				};
				class Heavy
				{
					label="Heavy";
				}
			};
			class Colour
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{
					"Black",
					"Red",
					"Blue",
					"Silver"
				};
				class Black
				{
					label="Black";
				};
				class Red
				{
					label="Red";
				};
				class Blue
				{
					label="Blue";
				};
				class Silver
				{
					label="Silver";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class BR_CH252D
		{
			model="BR_CH252D";
			Visor="None";
			Custom="Base";
		};	
		class BR_CH252D_B
		{
			model="BR_CH252D";
			Visor="Blue";
			Custom="Base";
		};
		class BR_CH252D_S
		{
			model="BR_CH252D";
			Visor="Silver";
			Custom="Base";
		};
		class BR_CH252D_G
		{
			model="BR_CH252D";
			Visor="Gold";
			Custom="Base";
		};
		class BR_CH252D_RPR
		{
			model="BR_CH252D";
			Custom="Reaper";
		};
		class BR_ILCS_B
		{
			model="BR_ILCS_Pack";
			Custom="Basic";
		};
		class BR_M52D_Rifleman
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Rifleman";
		};
		class BR_M52D_KIS_Rifleman
		{
			Model="BR_M52D_Rifleman";
			Custom="Hiruko";
			Variant="Rifleman";
		};
		class BR_M52D_SFP_Rifleman
		{
			Model="BR_M52D_Rifleman";
			Custom="Phoenix";
			Variant="Rifleman";
		};
		class BR_M52D_RPR_Rifleman
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Rifleman";
		};
		class BR_M52D_WRH_Rifleman
		{
			Model="BR_M52D_Rifleman";
			Custom="Warhound";
			Variant="Rifleman";
		};
		class BR_M52D_Demolitions
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Demolitions";
		};
		class BR_M52D_KIS_Demolitions
		{
			Model="BR_M52D_Rifleman";
			Custom="Hiruko";
			Variant="Demolitions";
		};
		class BR_M52D_SFP_Demolitions
		{
			Model="BR_M52D_Rifleman";
			Custom="Phoenix";
			Variant="Demolitions";
		};
		class BR_M52D_RPR_Demolitions
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Demolitions";
		};
		class BR_M52D_WRH_Demolitions
		{
			Model="BR_M52D_Rifleman";
			Custom="Warhound";
			Variant="Demolitions";
		};
		class BR_M52D_Scout
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Scout";
		};
		class BR_M52D_KIS_Scout
		{
			Model="BR_M52D_Rifleman";
			Custom="Hiruko";
			Variant="Scout";
		};
		class BR_M52D_SFP_Scout
		{
			Model="BR_M52D_Rifleman";
			Custom="Phoenix";
			Variant="Scout";
		};
		class BR_M52D_RPR_Scout
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Scout";
		};
		class BR_M52D_WRH_Scout
		{
			Model="BR_M52D_Rifleman";
			Custom="Warhound";
			Variant="Scout";
		};
		class BR_M52D_Sniper
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Sniper";
		};
		class BR_M52D_KIS_Sniper
		{
			Model="BR_M52D_Rifleman";
			Custom="Hiruko";
			Variant="Sniper";
		};
		class BR_M52D_SFP_Sniper
		{
			Model="BR_M52D_Rifleman";
			Custom="Phoenix";
			Variant="Sniper";
		};
		class BR_M52D_RPR_Sniper
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Sniper";
		};
		class BR_M52D_WRH_Sniper
		{
			Model="BR_M52D_Rifleman";
			Custom="Warhound";
			Variant="Sniper";
		};
		class BR_M52D_Marksman
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Marksman";
		};
		class BR_M52D_KIS_Marksman
		{
			Model="BR_M52D_Rifleman";
			Custom="Hiruko";
			Variant="Marksman";
		};
		class BR_M52D_SFP_Marksman
		{
			Model="BR_M52D_Rifleman";
			Custom="Phoenix";
			Variant="Marksman";
		};
		class BR_M52D_RPR_Marksman
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Marksman";
		};
	};
	class CfgVehicles
	{
		class BR_ILCS_Rucksack_Basic
		{
			Model="BR_ICLS_BACKPACK";
			Type="Basic";
			Colour="Black";
		};
		class BR_ILCS_Rucksack_Medic
		{
			Model="BR_ICLS_BACKPACK";
			Type="Medic";
			Colour="Black";
		};
		class BR_ILCS_Rucksack_Heavy
		{
			Model="BR_ICLS_BACKPACK";
			Type="Heavy";
			Colour="Black";
		};
		class BR_ILCS_Rucksack_Basic_Red
		{
			Model="BR_ICLS_BACKPACK";
			Type="Basic";
			Colour="Red";
		};
		class BR_ILCS_Rucksack_Medic_Red
		{
			Model="BR_ICLS_BACKPACK";
			Type="Medic";
			Colour="Red";
		};
		class BR_ILCS_Rucksack_Heavy_Red
		{
			Model="BR_ICLS_BACKPACK";
			Type="Heavy";
			Colour="Red";
		};
		class BR_ILCS_Rucksack_Basic_Blue
		{
			Model="BR_ICLS_BACKPACK";
			Type="Basic";
			Colour="Blue";
		};
		class BR_ILCS_Rucksack_Medic_Blue
		{
			Model="BR_ICLS_BACKPACK";
			Type="Medic";
			Colour="Blue";
		};
		class BR_ILCS_Rucksack_Heavy_Blue
		{
			Model="BR_ICLS_BACKPACK";
			Type="Heavy";
			Colour="Blue";
		};
		class BR_ILCS_Rucksack_Basic_Silver
		{
			Model="BR_ICLS_BACKPACK";
			Type="Basic";
			Colour="Silver";
		};
		class BR_ILCS_Rucksack_Medic_Silver
		{
			Model="BR_ICLS_BACKPACK";
			Type="Medic";
			Colour="Silver";
		};
		class BR_ILCS_Rucksack_Heavy_Silver
		{
			Model="BR_ICLS_BACKPACK";
			Type="Heavy";
			Colour="Silver";
		};
	};
};
class CfgPatches
{
	class 61st_Armor
	{
		author="61st Bushrangers";
		name="[61st]: Custom Assets";
		url="https://discord.gg/3shdsQ5Wrs";
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"61st_Core",
			"OPTRE_UNSC_Units_Army"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class 61st_Armor
		{
			list[]=
			{
				"61st_Armor"
			};
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet;
	class BR_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="61st";
		author="TakenFTG";
		ace_hearing_protection=1;
		displayName="[61st] CH252D Helmet";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"61st_Armor\Data\Helmets\Materials\V_CH252D.rvmat",
			"61st_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
				"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"61st_Armor\Data\Helmets\Materials\V_CH252D.rvmat",
				""
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=200;
					hitpointName="HitFace";
					passThrough=0.08;
				};
				class Head
				{
					armor=200;
					hitPointName="HitHead";
					passThrough=0.08;
				};
				class Neck
				{
					armor=200;
					hitpointName="HitNeck";
					passThrough=0.08;
				};
			};
		};
		allowedFacewear[]={};
	};
	class BR_CH252D_B: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
			"61st_Armor\Data\Helmets\V_CH252D_BLU_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
	class BR_CH252D_S: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Silver)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
			"61st_Armor\Data\Helmets\V_CH252D_SLV_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
	class BR_CH252D_G: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Gold)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
			"61st_Armor\Data\Helmets\V_CH252D_GLD_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
	class BR_CH252D_RPR: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Reaper)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_RPR_CO",
			"61st_Armor\Data\Helmets\V_CH252D_SLV_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class BR_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc="61st";
		author="TakenFTG";
		ace_hearing_protection=1;
		displayName="[61st] CH252D Helmet";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
			"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"61st_Armor\Data\Helmets\Materials\V_CH252D.rvmat",
			""
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
				"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"61st_Armor\Data\Helmets\Materials\V_CH252D.rvmat",
				""
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=200;
					hitpointName="HitFace";
					passThrough=0.08;
				};
				class Head
				{
					armor=200;
					hitPointName="HitHead";
					passThrough=0.08;
				};
				class Neck
				{
					armor=200;
					hitpointName="HitNeck";
					passThrough=0.08;
				};
			};
		};
		allowedFacewear[]={};
	};
	class BR_CH252D_B_dp: BR_CH252D_dp
	{
		displayName="[61st] CH252D Helmet (Blue)";
	};
	class BR_CH252D_S_dp: BR_CH252D_dp
	{
		displayName="[61st] CH252D Helmet (Silver)";
	};
	class BR_CH252D_G_dp: BR_CH252D_dp
	{
		displayName="[61st] CH252D Helmet (Gold)";
	};
	class BR_CH252D_RPR_dp: BR_CH252D_dp
	{
		displayName="[61st] CH252D Helmet (Reaper)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_RPR_CO",
			"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"61st_Armor\Data\Helmets\V_CH252D_RPR_CO",
				"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
		};
	};
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class BR_M52D_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] M52D (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_URB_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"61st_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			"61st_Armor\Data\Vests\Materials\V_M52_O.rvmat"
		};
	};
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class BR_M52D_Demolitions: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] M52D (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_URB_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"61st_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			"61st_Armor\Data\Vests\Materials\V_M52_O.rvmat"
		};
	};
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class BR_M52D_Marksman: OPTRE_UNSC_M52D_Armor_Marksman
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] M52D (Marksman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_URB_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"61st_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			"61st_Armor\Data\Vests\Materials\V_M52_O.rvmat"
		};
	};
	class OPTRE_UNSC_M52D_Armor_Scout;
	class BR_M52D_Scout: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] M52D (Scout)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_URB_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"61st_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			"61st_Armor\Data\Vests\Materials\V_M52_O.rvmat"
		};
	};
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class BR_M52D_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] M52D (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_URB_CO"
		};
		hiddenSelectionsMaterials[]=
		{
			"61st_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52.rvmat",
			"61st_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			"61st_Armor\Data\Vests\Materials\V_M52_O.rvmat"
		};
	};
	class BR_M52D_RPR_Rifleman: BR_M52D_Rifleman
	{
		displayName="[61st] M52D (Rifleman) Reaper";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_RPR_CO"
		};
	};
	class BR_M52D_RPR_Demolitions: BR_M52D_Demolitions
	{
		displayName="[61st] M52D (Demolitions) Reaper";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_RPR_CO"
		};
	};
	class BR_M52D_RPR_Marksman: BR_M52D_Marksman
	{
		displayName="[61st] M52D (Marksman) Reaper";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_RPR_CO"
		};
	};
	class BR_M52D_RPR_Scout: BR_M52D_Scout
	{
		displayName="[61st] M52D (Scout) Reaper";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_RPR_CO"
		};
	};
	class BR_M52D_RPR_Sniper: BR_M52D_Sniper
	{
		displayName="[61st] M52D (Sniper) Reaper";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_RPR_CO"
		};
	};
};
class CfgVehicles
{
	class ContainerSupply;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_ILCS_Rucksack_Heavy;
	class OPTRE_ILCS_Rucksack_Medical;
	class OPTRE_ANPRC_521_Black;
	class BR_ILCS_Rucksack_Basic: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic)";
		maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK"
		};
	};
	class BR_ILCS_Rucksack_Medic: OPTRE_ILCS_Rucksack_Medical
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Medic)";
		maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_MED",
			"optre_weapons\items\data\biofoam_co.paa"
		};
	
	};
	class BR_ILCS_Rucksack_Heavy: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Heavy)";
		maximumLoad=600;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK"
		};
	
	};
	class BR_ILCS_Rucksack_Basic_Red: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic) Red";
		maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_R"
		};
	};
	class BR_ILCS_Rucksack_Medic_Red: OPTRE_ILCS_Rucksack_Medical
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Medic) Red";
		maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_MED_R",
			"optre_weapons\items\data\biofoam_co.paa"
		};
	
	};
	class BR_ILCS_Rucksack_Heavy_Red: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Heavy) Red";
		maximumLoad=600;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_R"
		};
	
	};
	class BR_ILCS_Rucksack_Basic_Blue: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic) Blue";
		maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_B"
		};
	};
	class BR_ILCS_Rucksack_Medic_Blue: OPTRE_ILCS_Rucksack_Medical
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Medic) Blue";
		maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_MED_B",
			"optre_weapons\items\data\biofoam_co.paa"
		};
	
	};
	class BR_ILCS_Rucksack_Heavy_Blue: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Heavy) Blue";
		maximumLoad=600;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_B"
		};
	
	};
	class BR_ILCS_Rucksack_Basic_Silver: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic) Silver";
		maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_S"
		};
	};
	class BR_ILCS_Rucksack_Medic_Silver: OPTRE_ILCS_Rucksack_Medical
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Medic) Silver";
		maximumLoad=400;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_MED_S",
			"optre_weapons\items\data\biofoam_co.paa"
		};
	
	};
	class BR_ILCS_Rucksack_Heavy_Silver: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Heavy) Silver";
		maximumLoad=600;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_S"
		};
	
	};
	class BR_ANPRC_521: OPTRE_ANPRC_521_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-521";
		maximumLoad=400;
	};

};