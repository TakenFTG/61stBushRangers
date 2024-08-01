class CfgPatches
{
	class 61st_Armor_Helmets
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"61st_Armor"
		};
        addonRootClass="61st_Armor";
	};
};
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
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class BR_CH252D
		{
			model="BR_CH252D";
			HColour="Black";
		};	
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
		displayName="[61st] CH252D Helmet (Black)";
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
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_Blu_CO",
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
		displayName="[61st] CH252D Helmet (Black)";
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
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\V_CH252D_Blu_CO",
			"61st_Armor\Data\Helmets\V_CH252D_CLR_V_CA",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"61st_Armor\Data\Helmets\V_CH252D_Blu_CO",
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
};