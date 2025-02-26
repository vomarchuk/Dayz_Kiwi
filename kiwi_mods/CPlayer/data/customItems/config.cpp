class CfgPatches
{
	class VMCustomItems
	{
		units[]=
		{
			"KIWI_Battery9V",
			"KIWI_WeaponCleaningKit",
			"Nomad_Backpack",
			"TraderPlus"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Vehicles_Parts",
			"DZ_Gear_Consumables",
			"DZ_Gear_Medical",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Battery9V: Inventory_Base
	{
	};
	class KIWI_Battery9V: Battery9V
	{
		scope=2;
		displayName="Потужна батарейка";
		descriptionShort="Батарейка з підвищеною ємністю (в 10 разів більше стандартної) на 9 вольт (by KIWI)";
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\customItems\data\KIWI_9v.paa",
			"CPlayer\data\customItems\data\KIWI_9v.paa",
			"CPlayer\data\customItems\data\KIWI_9v.paa"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=1000;
			energyAtSpawn=1000;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};
	class WeaponCleaningKit: Inventory_Base
	{
	};
	class KIWI_WeaponCleaningKit: WeaponCleaningKit
	{
		scope=2;
		displayName="Набiр чисток для крафту та ремонту зброї";
		descriptionShort="Набір для чищення та ремонту зброї, що забезпечує професійний догляд за вашим спорядженням. У комплекті є все необхідне для підтримання 			ідеального стану зброї, включаючи інструменти для чищення, мастила та матеріали для ремонту. Цей набір стане незамінним помічником як для крафту, так i для 		відновлення зброї після тривалого використання (by KIWI)";
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\customItems\data\KIWI_cleaning_kit.paa",
			"CPlayer\data\customItems\data\KIWI_cleaning_kit.paa",
			"CPlayer\data\customItems\data\KIWI_cleaning_kit.paa"
		};
	};
	class Kits_Bottle_v3_ColorBase;
	class KIWI_Bottle_XL: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="Деже вмістка бутилка";
		descriptionShort="Сюди можна налити ну дуже багато води 8)";
		weight=180;
		itemSize[]={2,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768 - 8192 - 16384";
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureOverheatTime=0;
		varTemperatureMax=80;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=2500;
		temperaturePerQuantityWeight=1.5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
				};
			};
		};
	};
	class DuctTape: Inventory_Base
	{
	};
	class KIWI_DuctTape_XL: DuctTape
	{
		scope=2;
		displayName="Великий моток скотча";
		descriptionShort="Великий моток скотчу, який замінює 10 малих";
		model="\dz\gear\consumables\DuctTape.p3d";
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\customItems\data\KIWI_duct_tape.paa",
			"CPlayer\data\customItems\data\KIWI_duct_tape.paa",
			"CPlayer\data\customItems\data\KIWI_duct_tape.paa"
		};
	};
	class SewingKit: Inventory_Base
	{
	};
	class KIWI_SewingKit_XL: SewingKit
	{
		scope=2;
		displayName="Великий набір кравця";
		descriptionShort="Великий набір для швейки, що забезпечує професійний догляд за вашим спорядженням. У комплекті є все необхідне для підтримання ідеального стану швейки, включаючи інструм";
		model="\dz\gear\tools\sewing_kit.p3d";
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		itemSize[]={1,2};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\customItems\data\KIWI_sewingkit.paa",
			"CPlayer\data\customItems\data\KIWI_sewingkit.paa",
			"CPlayer\data\customItems\data\KIWI_sewingkit.paa"
		};
	};
};
