class CfgPatches
{
	class 61st_Armor_Uniforms
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
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
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