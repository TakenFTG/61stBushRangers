	class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet;
	class BR_H_RSV_PLAIN: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="61st";
		author="TakenFTG";
		ace_hearing_protection=1;
		displayName="[61st] Reservist Helmet (Plain)";
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
			"61st_Armor\Data\Helmets\Reserves\BR_H_RSV_PLAIN",
			"61st_Armor\data\Helmets\Materials\V_CH252D_DEF_V_CO",
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
				"61st_Armor\Data\Helmets\Reserves\BR_H_RSV_PLAIN",
				"61st_Armor\data\Helmets\Materials\V_CH252D_DEF_V_CO",
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
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class BR_H_RSV_PLAIN_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc="61st";
		author="TakenFTG";
		ace_hearing_protection=1;
		displayName="[61st] Reservist Helmet (Plain)";
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
			"61st_Armor\Data\Helmets\Reserves\BR_H_RSV_PLAIN",
			"61st_Armor\data\Helmets\Materials\V_CH252D_CLR_V_CA",
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
				"61st_Armor\Data\Helmets\Reserves\BR_H_RSV_PLAIN",
				"61st_Armor\data\Helmets\Materials\V_CH252D_CLR_V_CA",
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