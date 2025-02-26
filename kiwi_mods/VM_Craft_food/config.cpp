class CfgPatches
{
	class VM_CRAFT_FOOD
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class VM_CRAFT_FOOD
	{
		type="mod";
		class defs
		{
			class worldScriptModule
			{
				files[]=
				{
					"VM_Craft_food\scripts\4_World"
				};
			};
		};
	};
};
