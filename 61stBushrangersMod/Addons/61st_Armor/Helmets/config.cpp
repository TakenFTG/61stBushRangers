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
		class BR_H_BAT
		{
			options[]=
			{
				"HColour"
			};
			label="[61st] Battlion CH252D";
			class HColour
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{"CO","XO","RTO","SGT","MED","PLAIN"};
				class CO
				{label="";};
				class XO
				{label="";};
				class RTO
				{label="";};
				class SGT
				{label="";};
				class MED
				{label=""}
				class PLAIN
				{label=""}
			};
		};
		class BR_H_1ST
		{
			options[]=
			{
				"HColour"
			};
			label="[61st] 1-0 CH252D";
			class HColour
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{"CO","XO","RTO","SGT","MED","PLAIN"};
				class CO
				{label="";};
				class XO
				{label="";};
				class RTO
				{label="";};
				class SGT
				{label="";};
				class MED
				{label=""}
				class PLAIN
				{label=""}
			};
		};
		class BR_H_1I1
		{
			options[]=
			{
				"HColour"
			};
			label="[61st] 1-1 CH252D";
			class HColour
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{"LDR","SIC","RTO","MED","PLAIN"};
				class LDR
				{label="";};
				class SIC
				{label="";};
				class RTO
				{label="";};
				class MED
				{label=""}
				class PLAIN
				{label=""}
			};
		};
		class BR_H_1I2
		{
			options[]=
			{
				"HColour"
			};
			label="[61st] 1-2 CH252D";
			class HColour
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{"LDR","SIC","RTO","MED","PLAIN"};
				class LDR
				{label="";};
				class SIC
				{label="";};
				class RTO
				{label="";};
				class MED
				{label=""}
				class PLAIN
				{label=""}
			};
		};
		class BR_H_RSV
		{
			options[]=
			{
				"HColour"
			};
			label="[61st] Reservists CH252D";
			class HColour
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{"RTO","MED","PLAIN"};
				class RTO
				{label="";};
				class MED
				{label=""}
				class PLAIN
				{label=""}
			};
		};
		class BR_H_SQD
		{
			options[]=
			{
				"HColour"
			};
			label="[61st] SQUADRON CH252D";
			class HColour
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Colour";
				values[]=
				{"CO","XO","WOFF","PLAIN"};
				class CO
				{label="";};
				class XO
				{label=""}
				class WOFF
				{label=""}
				class PLAIN
				{label=""}
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
		class BR_H_BAT_CO
		{
			model="BR_H_BAT";
			HColour="CO";
		}
		class BR_H_BAT_XO
		{
			model="BR_H_BAT";
			HColour="XO";
		}
		class BR_H_BAT_RTO
		{
			model="BR_H_BAT";
			HColour="RTO";
		}
		class BR_H_BAT_SGT
		{
			model="BR_H_BAT";
			HColour="SGT";
		}
		class BR_H_BAT_MED
		{
			model="BR_H_BAT";
			HColour="MED";
		}
		class BR_H_BAT_PLAIN
		{
			model="BR_H_BAT";
			HColour="PLAIN";
		}
		class BR_H_1ST_CO
		{
			model="BR_H_1ST";
			HColour="CO";
		}
		class BR_H_1ST_XO
		{
			model="BR_H_1ST";
			HColour="XO";
		}
		class BR_H_1ST_RTO
		{
			model="BR_H_1ST";
			HColour="RTO";
		}
		class BR_H_1ST_SGT
		{
			model="BR_H_1ST";
			HColour="SGT";
		}
		class BR_H_1ST_MED
		{
			model="BR_H_1ST";
			HColour="MED";
		}
		class BR_H_1ST_PLAIN
		{
			model="BR_H_1ST";
			HColour="PLAIN";
		}
		class BR_H_1I1_LDR
		{
			model="BR_H_1I1";
			HColour="LDR";
		}
		class BR_H_1I1_2IC
		{
			model="BR_H_1I1";
			HColour="SIC";
		}
		class BR_H_1I1_RTO
		{
			model="BR_H_1I1";
			HColour="RTO";
		}
		class BR_H_1I1_MED
		{
			model="BR_H_1I1";
			HColour="MED";
		}
		class BR_H_1I1_PLAIN
		{
			model="BR_H_1I1";
			HColour="PLAIN";
		}
		class BR_H_1I2_LDR
		{
			model="BR_H_1I2";
			HColour="LDR";
		}
		class BR_H_1I2_2IC
		{
			model="BR_H_1I2";
			HColour="SIC";
		}
		class BR_H_1I2_RTO
		{
			model="BR_H_1I2";
			HColour="RTO";
		}
		class BR_H_1I2_MED
		{
			model="BR_H_1I2";
			HColour="MED";
		}
		class BR_H_1I2_PLAIN
		{
			model="BR_H_1I2";
			HColour="PLAIN";
		}
		class BR_H_RSV_RTO
		{
			model="BR_H_RSV";
			HColour="";
		}
		class BR_H_RSV_MED
		{
			model="BR_H_RSV";
			HColour="";
		}
		class BR_H_RSV_PLAIN
		{
			model="BR_H_RSV";
			HColour="";
		}
		class BR_H_SQD_CO
		{
			model="BR_H_SQD";
			HColour="";
		}
		class BR_H_SQD_XO
		{
			model="BR_H_SQD";
			HColour="";
		}
		class BR_H_SQD_WOFF
		{
			model="BR_H_SQD";
			HColour="";
		}
		class BR_H_SQD_PLAIN
		{
			model="BR_H_SQD";
			HColour="";
		}
	};
};
#include "CfgWeapons.hpp"