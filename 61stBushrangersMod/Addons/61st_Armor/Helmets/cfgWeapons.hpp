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
	class BR_H_BAT_CO: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\Battalion\BR_H_BAT_CO",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
    class BR_H_BAT_XO: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\Battalion\BR_H_BAT_XO",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
    class BR_H_BAT_RTO: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\Battalion\BR_H_BAT_RTO",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
    class BR_H_BAT_SGT: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\Battalion\BR_H_BAT_SGT",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
    class BR_H_BAT_MED: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\Battalion\BR_H_BAT_MED",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
    class BR_H_BAT_PLAIN: BR_CH252D
	{
		displayName="[61st] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Helmets\Battalion\BR_H_BAT_PLAIN",
			"61st_Armor\Data\Helmets\V_CH252D_DEF_V_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
	};
    class BR_H_1ST_CO: BR_CH252D
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
    class BR_H_1ST_XO: BR_CH252D
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
    class BR_H_1ST_RTO: BR_CH252D
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
    class BR_H_1ST_SGT: BR_CH252D
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
    class BR_H_1ST_: BR_CH252D
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
    class BR_H_1ST_: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
    class BR_H_BAT_CO: BR_CH252D
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
};