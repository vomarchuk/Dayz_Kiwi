class CfgPatches
{
	class VM_Craft
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
	class VM_Craft
	{
		dir="VM_Craft";
		name="VM_Craft";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		credits="";
		author="VoMa";
		authorID="76561198104182080";
		version=1;
		extra=0;
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
					"VM_Craft\scripts\4_World"
				};
			};
		};
	};
};
