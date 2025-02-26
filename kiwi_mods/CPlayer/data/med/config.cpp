class CfgPatches
{
	class med
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"TerjeMedicine",
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Medical"
		};
	};
};
class CfgVehicles
{
	class TerjeSleepingBag;
	class Inventory_Base;
	class Morphine: Inventory_Base
	{
		inventorySlot[]+=
		{
			"VMInjectorA",
			"VMInjectorB",
			"VMInjectorC",
			"VMInjectorD",
			"VMInjectorE",
			"VMInjectorF",
			"VMInjectorG",
			"VMInjectorH",
			"VMInjectorH",
			"VMInjectorI",
			"VMInjectorJ"
		};
	};
	class TerjeInjectorBase: Inventory_Base
	{
		inventorySlot[]+=
		{
			"VMInjectorA",
			"VMInjectorB",
			"VMInjectorC",
			"VMInjectorD",
			"VMInjectorE",
			"VMInjectorF",
			"VMInjectorG",
			"VMInjectorH",
			"VMInjectorH",
			"VMInjectorI",
			"VMInjectorJ"
		};
	};
	class TerjeSleepingBag_Blue: TerjeSleepingBag
	{
		inventorySlot[]+=
		{
			"sleepingbag"
		};
	};
	class TerjeSleepingBag_Woodland: TerjeSleepingBag
	{
		inventorySlot[]+=
		{
			"sleepingbag"
		};
	};
};
