class CfgPatches
{
	class CPlayer
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class CPlayer
	{
		dir="CPlayer";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="CPlayer";
		credits="TWE4KS";
		author="VoMa";
		authorID="76561198104182080";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		class defs
		{
			class imageSets
			{
				files[]=
				{
					"CPlayer\gui\imagesets\KIWI_GUI.imageset"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"CPlayer\scripts\3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"CPlayer\scripts\4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"CPlayer\Scripts\5_Mission"
				};
			};
		};
	};
};
