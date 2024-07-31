class XtdGearModels
{
	class CfgWeapons
	{
		class BR_CH252D
		{
			options[]=
			{
				"HColour"
			};
			label="[61st] CH252D";
			class HColour
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{"Black","Blue","Reaper","BatS"};
				class Black
				{label="Black";};
				class Blue
				{label="Blue";};
				class Reaper
				{label="Reaper";};
				class BatS
				{label="Battalion Staff";};
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
					"Reaper",
					"BatS"
				};
				class Base
				{
					label="Base";
				};
				class Reaper
				{
					label="Reaper";
				};
				class BatS
				{
					label="Battalion Staff"
				}
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
		class BR_ANPRC
		{
			options[]=
			{
				"Colour",
				"Radio"
			};
			label="[61st] AN/PRC";
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
					"BatS"
				};
				class Black
				{
					label="Black";
				};
				class Red
				{
					label="Red";
				};
				class BatS
				{
					label="Battalion Staff";
				};
			};
			class Radio
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Model";
				values[]=
				{
					"ANPRC521",
					"ANPRC515"
				};
				class ANPRC521
				{
					label="AN/PRC-521";
				};
				class ANPRC515
				{
					label="AN/PRC-515";
				};
			};
		};
	};	
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class BR_CH252D_Blu
		{
			model="BR_CH252D";
			HColour="Blue";
		};	
		class BR_CH252D_RPR
		{
			model="BR_CH252D";
			HColour="Reaper";
		};
		class BR_CH252D_BatS
		{
			model="BR_CH252D"
			HColour="BatS";
		}
		class BR_M52D_Rifleman
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Rifleman";
		};
		class BR_M52D_RPR_Rifleman
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Rifleman";
		};
		class BR_M52D_BatS_Rifleman
		{
			Model="BR_M52D_Rifleman";
			Custom="BatS";
			Variant="Rifleman";
		};
		class BR_M52D_Demolitions
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Demolitions";
		};
		class BR_M52D_RPR_Demolitions
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Demolitions";
		};
		class BR_M52D_BatS_Demolitions
		{
			Model="BR_M52D_Rifleman";
			Custom="BatS";
			Variant="Demolitions";
		};
		class BR_M52D_Scout
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Scout";
		};
		class BR_M52D_RPR_Scout
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Scout";
		};
		class BR_M52D_BatS_Scout
		{
			Model="BR_M52D_Rifleman";
			Custom="BatS";
			Variant="Scout";
		};
		class BR_M52D_Sniper
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Sniper";
		};
		class BR_M52D_RPR_Sniper
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Sniper";
		};
		class BR_M52D_BatS_Sniper
		{
			Model="BR_M52D_Rifleman";
			Custom="BatS";
			Variant="Sniper";
		};
		class BR_M52D_Marksman
		{
			Model="BR_M52D_Rifleman";
			Custom="Base";
			Variant="Marksman";
		};
		class BR_M52D_RPR_Marksman
		{
			Model="BR_M52D_Rifleman";
			Custom="Reaper";
			Variant="Marksman";
		};
		class BR_M52D_BatS_Marksman
		{
			Model="BR_M52D_Rifleman";
			Custom="BatS";
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
		class BR_ANPRC_521_BLK
		{
			Model="BR_ANPRC";
			Colour="Black";
			Radio="ANPRC521";
		};
		class BR_ANPRC_521_BatS
		{
			Model="BR_ANPRC";
			Colour="BatS";
			Radio="ANPRC521";
		};
		class BR_ANPRC_521_Red
		{
			Model="BR_ANPRC";
			Colour="Red";
			Radio="ANPRC521";
		};
		class BR_ANPRC_515_BLK
		{
			Model="BR_ANPRC";
			Colour="Black";
			Radio="ANPRC515";
		};
		class BR_ANPRC_515_BatS
		{
			Model="BR_ANPRC";
			Colour="BatS";
			Radio="ANPRC515";
		};
		class BR_ANPRC_515_Red
		{
			Model="BR_ANPRC";
			Colour="Red";
			Radio="ANPRC515";
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
	class Uniform_Base;
	class UniformItem;
	class BR_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="61st";
		author="TakenFTG";
		ace_hearing_protection=1;
		displayName="[61st] CH252D Helmet (Blue)";
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
					armor=180;
					hitpointName="HitFace";
					passThrough=0.08;
				};
				class Head
				{
					armor=180;
					hitPointName="HitHead";
					passThrough=0.08;
				};
				class Neck
				{
					armor=180;
					hitpointName="HitNeck";
					passThrough=0.08;
				};
			};
		};
		allowedFacewear[]={};
	};
	class BR_CH252D_Blu: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Battalion Staff)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
	class BR_CH252D_BatS: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Battalion Staff)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_BATS_CO",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
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
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
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
	class BR_CH252D_Blu_dp: BR_CH252D_dp
	{
		displayName="[61st] CH252D Helmet (Battalion Staff)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
			"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"61st_Armor\Data\Helmets\V_CH252D_DEF_CO",
				"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
		};
	};
	class BR_CH252D_BatS_dp: BR_CH252D_dp
	{
		displayName="[61st] CH252D Helmet (Battalion Staff)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_BatS_CO",
			"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"61st_Armor\Data\Helmets\V_CH252D_BatS_CO",
				"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
		};
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
	class BR_M52D_BatS_Rifleman: BR_M52D_Rifleman
	{
		displayName="[61st] M52D (Rifleman) Battalion";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_BatS_CO"
		};
	};
	class BR_M52D_BatS_Demolitions: BR_M52D_Demolitions
	{
		displayName="[61st] M52D (Demolitions) Battalion";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_BatS_CO"
		};
	};
	class BR_M52D_BatS_Marksman: BR_M52D_Marksman
	{
		displayName="[61st] M52D (Marksman) Battalion";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_BatS_CO"
		};
	};
	class BR_M52D_BatS_Scout: BR_M52D_Scout
	{
		displayName="[61st] M52D (Scout) Battalion";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_BatS_CO"
		};
	};
	class BR_M52D_BatS_Sniper: BR_M52D_Sniper
	{
		displayName="[61st] M52D (Sniper) Battalion";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Vests\V_M52_V_URB_CO",
			"61st_Armor\Data\Vests\V_M52_URB_CO",
			"61st_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"61st_Armor\Data\Vests\V_M52_O_BatS_CO"
		};
	};
	class BR_Love: Uniform_Base
	{
		author="TakenFTG";
		scope=2;
		displayName="[61st] I Heart Mills";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Kart\Civil\Data\c_poloshirtpants_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="IHEARTMILLS";
			containerClass="Supply50";
			mass=60;
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
	class OPTRE_ANPRC_515;
	class BR_ILCS_Rucksack_Basic: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic)";
		maximumLoad=300;
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
		maximumLoad=300;
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
		maximumLoad=450;
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
		maximumLoad=300;
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
		maximumLoad=300;
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
		maximumLoad=450;
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
		maximumLoad=300;
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
		maximumLoad=300;
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
		maximumLoad=450;
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
		maximumLoad=300;
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
		maximumLoad=300;
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
		maximumLoad=450;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_S"
		};
	
	};
	class BR_ANPRC_521_BLK: OPTRE_ANPRC_521_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-521 (Black)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\soft_backpack_co.paa",
			"61st_Armor\Data\Backpacks\commopack_blk_co.paa"
		};
	};
	class BR_ANPRC_521_BatS: OPTRE_ANPRC_521_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-521 (Battalion)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\soft_backpack_co.paa",
			"61st_Armor\Data\Backpacks\commopack_BatS_co.paa"
		};
	};
	class BR_ANPRC_521_Red: OPTRE_ANPRC_521_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-521 (Red)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\soft_backpack_co.paa",
			"61st_Armor\Data\Backpacks\commopack_Red_co.paa"
		};
	};
		class BR_ANPRC_515_BLK: OPTRE_ANPRC_515
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-515 (Black)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\commopack515_blk_co.paa"
		};
	};
	class BR_ANPRC_515_BatS: OPTRE_ANPRC_515
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-515 (Battalion)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\commopack515_BatS_co.paa"
		};
	};
	class BR_ANPRC_515_Red: OPTRE_ANPRC_515
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-515 (Red)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\commopack515_Red_co.paa"
		};
	};
	class B_RangeMaster_F;
	class IHEARTMILLS : B_RangeMaster_F
    {
        scope = 2;
        displayName = "I <3 Mills";
        uniformClass = "IHEARTMILLS";
        model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"61st_Armor\Data\Vests\IHEARTMILLS"};
    };
};