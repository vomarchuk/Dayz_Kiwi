class CfgPatches
{
	class VMCarCargoSize
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts",
			"DZ_Data",
			"DZ_Gear_Camping",
			"DZ_Gear_Containers",
			"DZ_Vehicles_Parts"
		};
	};
};
class CfgVehicles
{
	class CarScript;
	class rag_atv_base: CarScript
	{
	};
	class rag_atv_blue: rag_atv_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class rag_atv_black: rag_atv_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class rag_atv_white: rag_atv_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class rag_atv_pink: rag_atv_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class rag_atv_green: rag_atv_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class rag_atv_red: rag_atv_base
	{
		class Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
};
