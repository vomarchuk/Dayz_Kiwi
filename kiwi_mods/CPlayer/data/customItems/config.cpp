class CfgPatches
{
	class VMCustomItems
	{
		units[] =
			{
				"KIWI_Battery9V",
				"KIWI_WeaponCleaningKit",
				"KIWI_CarBattery",
				"KIWI_CarRadiator"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
			{
				"DZ_Data",
				"DZ_Vehicles_Parts",
				"DZ_Gear_Consumables",
				"DZ_Gear_Medical",
				"DZ_Weapons_Melee",
				"DZ_Weapons_Magazines"};
	};
};
class CfgVehicles
{
	class Barrel_ColorBase;
	class WoodenCrate;
	class CarBattery;
	class CarRadiator;
	class Battery9V;
	class WeaponCleaningKit;
	class DuctTape;
	class SewingKit;

	class KIWI_Battery9V : Battery9V
	{
		scope = 2;
		displayName = "Потужна батарейка";
		descriptionShort = "Батарейка з підвищеною ємністю (в 10 разів більше стандартної) на 9 вольт (by KIWI)";
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"CPlayer\data\customItems\data\KIWI_9v.paa",
			"CPlayer\data\customItems\data\KIWI_9v.paa",
			"CPlayer\data\customItems\data\KIWI_9v.paa"
		};
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 1000;
			energyAtSpawn = 1000;
			convertEnergyToQuantity = 1;
			reduceMaxEnergyByDamageCoef = 1;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {1};
		};
	};
	class KIWI_WeaponCleaningKit : WeaponCleaningKit
	{
		scope = 2;
		displayName = "Набiр чисток для крафту та ремонту зброї";
		descriptionShort = "Набір для чищення та ремонту зброї, що забезпечує професійний догляд за вашим спорядженням. У комплекті є все необхідне для підтримання 			ідеального стану зброї, включаючи інструменти для чищення, мастила та матеріали для ремонту. Цей набір стане незамінним помічником як для крафту, так i для 		відновлення зброї після тривалого використання (by KIWI)";
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"CPlayer\data\customItems\data\KIWI_cleaning_kit.paa",
			"CPlayer\data\customItems\data\KIWI_cleaning_kit.paa",
			"CPlayer\data\customItems\data\KIWI_cleaning_kit.paa"
		};
	};
	class KIWI_DuctTape_XL : DuctTape
	{
		scope = 2;
		displayName = "Великий моток скотча";
		descriptionShort = "Великий моток скотчу, який замінює 10 малих";
		model = "\dz\gear\consumables\DuctTape.p3d";
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"CPlayer\data\customItems\data\KIWI_duct_tape.paa",
			"CPlayer\data\customItems\data\KIWI_duct_tape.paa",
			"CPlayer\data\customItems\data\KIWI_duct_tape.paa"
		};
	};
	class KIWI_SewingKit_XL : SewingKit
	{
		scope = 2;
		displayName = "Великий набір кравця";
		descriptionShort = "Великий набір для швейки, що забезпечує професійний догляд за вашим спорядженням. У комплекті є все необхідне для підтримання ідеального стану швейки, включаючи інструм";
		model = "\dz\gear\tools\sewing_kit.p3d";
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		itemSize[] = {1, 2};
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"CPlayer\data\customItems\data\KIWI_sewingkit.paa",
			"CPlayer\data\customItems\data\KIWI_sewingkit.paa",
			"CPlayer\data\customItems\data\KIWI_sewingkit.paa"
		};
	};
	class KIWI_CarBattery : CarBattery
	{
		scope = 2;
		displayName = "Акумулятор високої ємності для легкового автомобіля";
		descriptionShort = "Гравці стверджують, що цього вистачить до кінця вайпу, але, можливо, це міф — перевір сам.";
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
		hiddenSelections[] =
		{
			"zbytek"
		};
		attachments[] =
		{
			"MetalWire"
		};
		inventorySlot[] =
		{
			"CarBattery",
			"LargeBattery"
		};
		hiddenSelectionsTextures[] =
		{
			"CPlayer\data\customItems\data\KIWI_CarBattery.paa",
			"CPlayer\data\customItems\data\KIWI_CarBattery.paa",
			"CPlayer\data\customItems\data\KIWI_CarBattery.paa"
		};
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			convertEnergyToQuantity = 1;
			energyStorageMax = 5000;
			energyAtSpawn = 5000;
			reduceMaxEnergyByDamageCoef = 0.5;
			powerSocketsCount = 1;
			plugType = 4;
			compatiblePlugTypes[] = {5, 8, 6};
			attachmentAction = 2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class KIWI_CarRadiator : CarRadiator
	{
		scope = 2;
		displayName = "Посилений автомобільний радіатор";
		descriptionShort = "Посилений автомобільний радіатор забезпечує ефективніше охолодження навіть при високих навантаженнях, що робить його ідеальним вибором для тривалих поїздок та екстремальних умов.";
		model = "\dz\vehicles\parts\radiator_car.p3d";
		hiddenSelections[] =
			{
				"zbytek"};
		hiddenSelectionsTextures[] =
			{
				"CPlayer\data\customItems\data\KIWI_CarRadiator.paa",
				"CPlayer\data\customItems\data\KIWI_CarRadiator.paa",
				"CPlayer\data\customItems\data\KIWI_CarRadiator.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class KIWI_Barrel_01 : Barrel_ColorBase
	{
		scope = 2;
		color = "Blue";
		displayName = "Бочка";
		descriptionShort = "Збільшена бочка";
		hiddenSelectionsTextures[] = {"CPlayer\data\customItems\data\KIWI_barrel_01_co.paa"};
		hologramMaterial = "barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class Cargo
		{
			itemsCargoSize[] = {10, 30};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class KIWI_WoodenCrate : WoodenCrate
	{
		scope = 2;
		displayName = "Ящик";
		descriptionShort = "Збільшений ящик";
		// hiddenSelectionsTextures[] = {"CPlayer\data\customItems\data\KIWI_WoodenCrate_co.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10, 10};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					
				};
			};
		};
	};
};
