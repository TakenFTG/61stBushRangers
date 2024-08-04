class CfgPatches
{
	class 61st_Armor_Vests
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
					label="Medic";
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
};
class XtdGearInfos
{
	class CfgWeapons
	{
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
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
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
};