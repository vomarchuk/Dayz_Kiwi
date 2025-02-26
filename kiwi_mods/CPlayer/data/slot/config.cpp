class CfgPatches
{
	class sample_slot
	{
		units[]=
		{
			"VMCase",
			"VMFirstAidKit",
			"VMGps",
			"VMQuestBear",
			"VMInjectorA",
			"VMInjectorB",
			"VMInjectorC",
			"VMInjectorD",
			"VMInjectorE",
			"VMInjectorF",
			"VMInjectorG",
			"VMInjectorH",
			"VMInjectorI",
			"VMInjectorJ",
			"VMIFAC",
			"VMNanoPouch1",
			"VMNanoPouch2"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Medical",
			"DZ_Characters_Masks",
			"DZ_Gear_Consumables",
			"DZ_Characters",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Man;
	class SurvivorBase: Man
	{
		attachments[]+=
		{
			"VMCase",
			"VMFirstAidKit",
			"VMQuestBear"
		};
		class InventoryEquipment
		{
			playerSlots[]+=
			{
				"Slot_VMCase",
				"Slot_VMFirstAidKit",
				"Slot_VMQuestBear"
			};
		};
	};
	class Inventory_Base;
	class Hatchet;
	class ExpansionGPS: Inventory_Base
	{
		inventorySlot[]=
		{
			"VMGps",
			"GPSReceiver"
		};
	};
	class FOG_DR_Tomahawk_Base: Hatchet
	{
		inventorySlot[]=
		{
			"FOG_hatchet_slot",
			"Hatchet"
		};
	};
};
class CfgSlots
{
	class Slot_VMCase
	{
		name="VMCase";
		displayName="Захисний кейс";
		ghostIcon="set:KIWI_GUI image:Case";
	};
	class Slot_VMFirstAidKit
	{
		name="VMFirstAidKit";
		displayName="Аптечка";
		ghostIcon="set:KIWI_GUI image:FirstAidKit";
	};
	class Slot_VMGps
	{
		name="VMGps";
		displayName="GPS";
		ghostIcon="set:KIWI_GUI image:Gps";
	};
	class Slot_VMQuestBear
	{
		name="VMQuestBear";
		displayName="Пухнастий ведмедик";
		ghostIcon="set:KIWI_GUI image:questBear";
	};
	class Slot_VMInjectorA
	{
		name="VMInjectorA";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorB
	{
		name="VMInjectorB";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorC
	{
		name="VMInjectorC";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorD
	{
		name="VMInjectorD";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorE
	{
		name="VMInjectorE";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorF
	{
		name="VMInjectorF";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorG
	{
		name="VMInjectorG";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorH
	{
		name="VMInjectorH";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorI
	{
		name="VMInjectorI";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMInjectorJ
	{
		name="VMInjectorJ";
		displayName="Injector";
		ghostIcon="set:KIWI_GUI image:Injector";
	};
	class Slot_VMIFAC
	{
		name="VMIFAC";
		displayName="IFAC";
		ghostIcon="set:KIWI_GUI image:IFAC";
	};
	class Slot_VMNanoPouch1
	{
		name="VMNanoPouch1";
		displayName="Нано підсумок";
		ghostIcon="set:dayz_inventory image:vestpouches";
	};
	class Slot_VMNanoPouch2
	{
		name="VMNanoPouch2";
		displayName="Нано підсумок";
		ghostIcon="set:dayz_inventory image:vestpouches";
	};
};
