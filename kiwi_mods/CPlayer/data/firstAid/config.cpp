class CfgPatches
{
	class first_Air
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Medical",
			"DZ_Gear_Consumables",
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class FirstAidKit: Container_Base
	{
		itemsCargoSize[]={8,4};
		inventorySlot[]=
		{
			"VMFirstAidKit"
		};
	};
	class TerjeFirstAidKitMedium: Container_Base
	{
		itemsCargoSize[]={9,6};
		inventorySlot[]=
		{
			"VMFirstAidKit"
		};
	};
	class TerjeFirstAidKitLarge: Container_Base
	{
		itemsCargoSize[]={10,8};
		inventorySlot[]=
		{
			"VMFirstAidKit"
		};
	};
	class TerjeFirstAidKitAdvancedBase: Container_Base
	{
		itemSize[]={2,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"VMIFAC"
		};
	};
	class TerjeFirstAidKitIndividualBase: Container_Base
	{
		itemSize[]={2,2};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"VMIFAC"
		};
	};
};
