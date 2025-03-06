class CfgPatches
{
	class PD_CarDamage
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"DayZExpansion_Vehicles_Data"
		};
	};
};

class CfgMods
{
	class CarDamage
	{
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"CarDamage/4_World"
				};
			};
		};
	};
};


class CfgVehicles
{
	class DamageSystem;
	class GlobalHealth;
	class Health;
	class Inventory_Base;
	class CarWheel: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};
	class CarBattery: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};
	class SparkPlug: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
				};
			};
		};
	};
	class CarRadiator: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	}
};
