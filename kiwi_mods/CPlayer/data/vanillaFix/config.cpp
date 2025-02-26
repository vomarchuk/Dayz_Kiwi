class CfgPatches
{
	class VMVanillaFix
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Medical",
			"DZ_Characters_Masks",
			"DZ_Gear_Consumables",
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class inventory_Base;
	class BatteryCharger: inventory_Base
	{
		attachments[]+=
		{
			"BatteryD"
		};
	};
};
