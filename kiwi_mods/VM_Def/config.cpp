class CfgPatches
{
	class VM_Def
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"TerjeMedicine",
			"TerjeRadiation"
		};
	};
};
class CfgVehicles
{
	class GasMask;
	class Mich2001Helmet;
	class Clothing;
	class TTsKOJacket_camo;
	class JungleBoots_ColorBase;
	class NBCGloves_ColorBase;
	class VM_Ghost_Helmet: Mich2001Helmet
	{
		class Protection
		{
			melee=0.40000001;
			firearm=0.40000001;
			radiation=0;
		};
	};
	class VM_Ghost_Helmet_NBC: Clothing
	{
		class Protection
		{
			melee=0.5;
			firearm=0.5;
			radiation=1;
		};
	};
	class VM_Ghost_Filter_NBC_LOW: GasMask
	{
		class Protection
		{
			radiation=1;
		};
	};
	class VM_Ghost_Filter_NBC_MAX: GasMask
	{
		class Protection
		{
			radiation=1;
		};
	};
	class VM_Ghost_Top: Clothing
	{
		class Protection
		{
			melee=0.5;
			firearm=0.5;
			radiation=1;
		};
	};
	class VM_Ghost_Pants: Clothing
	{
		class Protection
		{
			melee=0.5;
			firearm=0.5;
			radiation=1;
		};
	};
	class VM_Ghost_Vest_V1: Clothing
	{
		class Protection
		{
			melee=0.40000001;
			firearm=0.40000001;
			radiation=1;
		};
	};
	class VM_Ghost_Vest_V2: VM_Ghost_Vest_V1
	{
		class Protection
		{
			melee=0.5;
			firearm=0.5;
		};
	};
	class VM_Ghost_Vest_V3: VM_Ghost_Vest_V1
	{
		class Protection
		{
			melee=0.60000002;
			firearm=0.60000002;
		};
	};
	class VM_Ghost_Vest_V4: VM_Ghost_Vest_V1
	{
		class Protection
		{
			melee=0.69999999;
			firearm=0.69999999;
		};
	};
	class VM_Ghost_Gloves: Clothing
	{
		class Protection
		{
			radiation=1;
		};
	};
	class VM_TOXIC_GasMask: Clothing
	{
		class Protection
		{
			radiation=1;
		};
	};
	class VM_TOXIC_Jacket: TTsKOJacket_camo
	{
		class Protection
		{
			radiation=1;
		};
	};
	class VM_TOXIC_Pants: Clothing
	{
		class Protection
		{
			radiation=1;
		};
	};
	class VM_TOXIC_Boots: JungleBoots_ColorBase
	{
		class Protection
		{
			radiation=1;
		};
	};
	class VM_TOXIC_Gloves: NBCGloves_ColorBase
	{
		class Protection
		{
			radiation=1;
		};
	};
};
