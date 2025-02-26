class CfgPatches
{
	class VM_FOG_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Pistols",
			"DZ_Weapons_Projectiles",
			"DZ_Characters",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Projectiles",
			"DZ_Scripts",
			"TerjeMedicine",
			"DZ_Gear_Camping",
			"DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class Container_Base;
	class FOG_TV110T_MedkitBase: Container_Base
	{
		displayName="TV110 Медичний підсумок";
		descriptionShort="В цьому підсумку ви можете зберігати до 10 інєкторів";
		attachments[]=
		{
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
			"VMIFAC"
		};
	};
	class Inventory_Base;
	class FOG_Pouch_LBT_Base: Inventory_Base
	{
	};
	class FOG_Pouch_LBT_MC: FOG_Pouch_LBT_Base
	{
		displayName="LBT Медичний підсумок";
		descriptionShort="В цьому підсумку ви можете зберігати до 10 інєкторів";
		attachments[]=
		{
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
			"VMIFAC"
		};
	};
	class FOG_Pouch_LBT_MCB: FOG_Pouch_LBT_Base
	{
		displayName="LBT Медичний підсумок";
		descriptionShort="В цьому підсумку ви можете зберігати до 10 інєкторів";
		attachments[]=
		{
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
			"VMIFAC"
		};
	};
	class FOG_Pouch_IFAK_Base: Inventory_Base
	{
	};
	class FOG_Pouch_IFAK_Brown: FOG_Pouch_IFAK_Base
	{
		displayName="IFAK Медичний підсумок";
		descriptionShort="В цьому підсумку ви можете зберігати до 10 інєкторів";
		attachments[]=
		{
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
			"VMIFAC"
		};
	};
	class FOG_Pouch_IFAK_CB: FOG_Pouch_IFAK_Base
	{
		displayName="IFAK Медичний підсумок";
		descriptionShort="В цьому підсумку ви можете зберігати до 10 інєкторів";
		attachments[]=
		{
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
			"VMIFAC"
		};
	};
	class FOG_Pouch_IFAK_RG: FOG_Pouch_IFAK_Base
	{
		displayName="IFAK Медичний підсумок";
		descriptionShort="В цьому підсумку ви можете зберігати до 10 інєкторів";
		attachments[]=
		{
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
			"VMIFAC"
		};
	};
	class FOG_Pouch_IFAK_Grey: FOG_Pouch_IFAK_Base
	{
		displayName="IFAK Медичний підсумок";
		descriptionShort="В цьому підсумку ви можете зберігати до 10 інєкторів";
		attachments[]=
		{
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
			"VMIFAC"
		};
	};
	class FOG_Pouch_IFAK_Black: FOG_Pouch_IFAK_Base
	{
		displayName="IFAK Медичний підсумок";
		descriptionShort="В цьому підсумку ви можете зберігати до 10 інєкторів";
		attachments[]=
		{
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
			"VMIFAC"
		};
	};
	class FOG_Vest_PhoneCase1_Base: Inventory_Base
	{
	};
	class VM_Nano_Pouch: FOG_Vest_PhoneCase1_Base
	{
		scope=2;
		displayName="Експериментальний підсумок";
		descriptionShort="Ультратонкий підсумок, виготовлений для сету типу Привид.";
		itemSize[]={2,2};
		attachments[]={};
		inventorySlot[]=
		{
			"VMNanoPouch1",
			"VMNanoPouch2"
		};
		itemsCargoSize[]={10,3};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\FOG\jugger_black_co.paa"
		};
	};
	class FOG_Gorka_Pants_ColorBase: Clothing
	{
	};
	class VM_Blackout_Ops_Pants_Base_V1: FOG_Gorka_Pants_ColorBase
	{
		scope=2;
		displayName="Штани Темний спецназ V1";
		descriptionShort="Тактичні штани, створені для операцій у повній темряві. Виготовлені з міцного, водостійкого матеріалу, вони забезпечують максимальну мобільність і захист. Оснащені додатковими кишенями для боєприпасів та спорядження.";
		itemsCargoSize[]={6,8};
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\FOG\VM_Blackout_Ops_Pants_01.paa",
			"CPlayer\data\FOG\VM_Blackout_Ops_Pants_01.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
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
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0.40000001;
					};
					class Shock
					{
						damage=0.40000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0.40000001;
					};
					class Shock
					{
						damage=0.40000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0.40000001;
					};
					class Shock
					{
						damage=0.40000001;
					};
				};
			};
		};
	};
	class VM_Blackout_Ops_Pants_01_V1: VM_Blackout_Ops_Pants_Base_V1
	{
		displayName="Штани Темний спецназ V1";
		itemsCargoSize[]={6,8};
	};
	class VM_Blackout_Ops_Pants_01_V2: VM_Blackout_Ops_Pants_Base_V1
	{
		displayName="Штани Темний спецназ V2";
		itemsCargoSize[]={6,10};
	};
	class VM_Blackout_Ops_Pants_01_V3: VM_Blackout_Ops_Pants_Base_V1
	{
		displayName="Штани Темний спецназ V3";
		itemsCargoSize[]={8,10};
	};
	class VM_Blackout_Ops_Pants_01_V4: VM_Blackout_Ops_Pants_Base_V1
	{
		displayName="Штани Темний спецназ V4";
		itemsCargoSize[]={10,10};
	};
	class FOG_Gorka_Jacket_ColorBase: Clothing
	{
	};
	class VM_Blackout_Ops_Jacket_Base_V1: FOG_Gorka_Jacket_ColorBase
	{
		scope=2;
		displayName="Куртка Темний спецназ V1";
		descriptionShort="Легка, але надзвичайно міцна тактична куртка, яка ідеально підходить для прихованих операцій. Камуфляжне покриття поглинає світло, а внутрішня підкладка забезпечує тепло та захист від вітру. Посилені вставки на ліктях підвищують зносостійкість.";
		itemsCargoSize[]={8,8};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\FOG\VM_Blackout_Ops_Jacket_01.paa",
			"CPlayer\data\FOG\VM_Blackout_Ops_Jacket_01.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
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
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0.40000001;
					};
					class Shock
					{
						damage=0.40000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0.40000001;
					};
					class Shock
					{
						damage=0.40000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0.40000001;
					};
					class Shock
					{
						damage=0.40000001;
					};
				};
			};
		};
	};
	class VM_Blackout_Ops_Jacket_01_V1: VM_Blackout_Ops_Jacket_Base_V1
	{
		displayName="Куртка Темний спецназ V1";
		itemsCargoSize[]={8,8};
	};
	class VM_Blackout_Ops_Jacket_01_V2: VM_Blackout_Ops_Jacket_Base_V1
	{
		displayName="Куртка Темний спецназ V2";
		itemsCargoSize[]={10,8};
	};
	class VM_Blackout_Ops_Jacket_01_V3: VM_Blackout_Ops_Jacket_Base_V1
	{
		displayName="Куртка Темний спецназ V3";
		itemsCargoSize[]={10,10};
	};
	class VM_Blackout_Ops_Jacket_01_V4: VM_Blackout_Ops_Jacket_Base_V1
	{
		displayName="Куртка Темний спецназ V4";
		itemsCargoSize[]={10,12};
	};
};
