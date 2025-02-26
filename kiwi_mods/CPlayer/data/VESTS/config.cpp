class CfgPatches
{
	class VM_VEST
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
			"DZ_Gear_Camping",
			"DZ_Characters_Pants",
			"TerjeMedicine"
		};
	};
};
class CfgVehicles
{
	class FOG_Helmet_FASTMT_Base;
	class FOG_Vest_FCPC_ColorBase;
	class FOG_Vest_Osprey_ColorBase;
	class FOG_Vest_Thor_ColorBase;
	class FOG_Vest_Gen4_ColorBase;
	class FOG_Vest_FCPC_Black: FOG_Vest_FCPC_ColorBase
	{
	};
	class KIWI_VEST_V1: FOG_Vest_FCPC_Black
	{
		scope=2;
		displayName="Бронежилет ГРОМ V1";
		descriptionShort="Забезпечує неперевершений комфорт i підтримку вантажу в надійній конфігурації бронежилета. Має функцію швидкого скидання та підтримує вставки з м'якою i твердою бронею";
		attachments[]=
		{
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"VestPouch",
			"extra_mag_pouch",
			"FOG_admin_small",
			"FOG_VestSlotFR",
			"FOG_gren_pouch",
			"FOG_ifak_vest",
			"FOG_vest_belly",
			"FOG_vest_panel"
		};
		class Protection
		{
			melee=0.30000001;
			firearm=0.30000001;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_destruct.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_destruct.rvmat"
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
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.55000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.44999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
			};
		};
	};
	class FOG_Vest_Osprey_Black: FOG_Vest_Osprey_ColorBase
	{
	};
	class KIWI_VEST_V2: FOG_Vest_Osprey_Black
	{
		scope=2;
		displayName="Бронежилет ГРОМ  V2";
		descriptionShort="Забезпечує неперевершений комфорт i підтримку вантажу в надійній конфігурації бронежилета. Має функцію швидкого скидання та підтримує вставки з м'якою i твердою бронею. Забезпечує кращу броню ніж версія V1";
		attachments[]=
		{
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"VestPouch",
			"extra_mag_pouch",
			"FOG_admin_small",
			"FOG_VestSlotFR",
			"FOG_gren_pouch",
			"FOG_ifak_vest",
			"FOG_vest_belly",
			"FOG_vest_panel"
		};
		class Protection
		{
			melee=0.40000001;
			firearm=0.40000001;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_destruct.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_destruct.rvmat"
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
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.15000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.15000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.15000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.15000001;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.15000001;
					};
				};
			};
		};
	};
	class FOG_Vest_Thor_Black: FOG_Vest_Thor_ColorBase
	{
	};
	class KIWI_VEST_V3: FOG_Vest_Thor_Black
	{
		scope=2;
		displayName="Бронежилет ГРОМ  V3";
		descriptionShort="Забезпечує неперевершений комфорт i підтримку вантажу в надійній конфігурації бронежилета. Має функцію швидкого скидання та підтримує вставки з м'якою i твердою бронею. Забезпечує кращу броню ніж версія V2";
		attachments[]=
		{
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"VestPouch",
			"extra_mag_pouch",
			"FOG_admin_small",
			"FOG_VestSlotFR",
			"FOG_gren_pouch",
			"FOG_ifak_vest",
			"FOG_vest_belly",
			"FOG_vest_panel"
		};
		class Protection
		{
			melee=0.5;
			firearm=0.5;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_destruct.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_destruct.rvmat"
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
						damage=0.15000001;
					};
					class Blood
					{
						damage=0;
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
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.12;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.12;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.12;
					};
				};
			};
		};
	};
	class FOG_Vest_Gen4_Black: FOG_Vest_Gen4_ColorBase
	{
	};
	class KIWI_VEST_V4: FOG_Vest_Gen4_Black
	{
		scope=2;
		displayName="Бронежилет ГРОМ  V4";
		descriptionShort="Забезпечує неперевершений комфорт i підтримку вантажу в надійній конфігурації бронежилета. Має функцію швидкого скидання та підтримує вставки з м'якою i твердою бронею. Забезпечує кращу броню ніж версія V3";
		attachments[]=
		{
			"WalkieTalkie",
			"FOG_big_patch",
			"FOG_tourniquet",
			"VestPouch",
			"extra_mag_pouch",
			"FOG_admin_small",
			"FOG_VestSlotFR",
			"FOG_gren_pouch",
			"FOG_ifak_vest",
			"FOG_vest_belly",
			"FOG_vest_panel"
		};
		class Protection
		{
			melee=0.60000002;
			firearm=0.60000002;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_damage.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"FOG_MOD\Vests\FOG_FCPC\data\FCPC_destruct.rvmat",
								"FOG_MOD\Vests\FOG_AVS\data\AVS_B\avs_b_destruct.rvmat"
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
						damage=0.1;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.090000004;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.090000004;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.090000004;
					};
				};
			};
		};
	};
	class FOG_Helmet_FASTMT_Black: FOG_Helmet_FASTMT_Base
	{
	};
	class KIWI_HELMET_V4: FOG_Helmet_FASTMT_Black
	{
		scope=2;
		displayName="Шолом ГРОМ V4";
		descriptionShort="Забезпечує високий рівень захисту та комфорт під час використання. Оснащений функцією швидкого скидання та сумісний із додатковими захисними елементами.";
		class Protection
		{
			melee=0.60000002;
			firearm=0.60000002;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.1;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.090000004;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.090000004;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.090000004;
					};
				};
			};
		};
	};
};
