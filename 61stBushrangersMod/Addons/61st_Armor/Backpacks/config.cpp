class CfgPatches
{
	class 61st_Armor_Backpacks
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
};