class CfgPatches
{
	class VMCase
	{
		units[]=
		{
			"VMCase"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Medical",
			"DZ_Characters_Masks",
			"DZ_Gear_Consumables",
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class SmallProtectorCase;
	class Custom_ProtectorCase_25: SmallProtectorCase
	{
		scope=2;
		displayName="Захисний кейс";
		descriptionShort="Захисний кейс на 25 слотів";
		itemSize[]={4,4};
		itemsCargoSize[]={5,5};
		inventorySlot[]=
		{
			"VMCase"
		};
		simulation="inventoryItem";
		hiddenSelections[]=
		{
			"zbytek"
		};
		openable=0;
		allowOwnedCargoManipulation=1;
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_25.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250000;
				};
			};
		};
	};
	class Custom_ProtectorCase_50: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 50 слотів";
		itemsCargoSize[]={5,10};
		attachments[]=
		{
			"Knife"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_50.paa"
		};
	};
	class Custom_ProtectorCase_100: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 100 слотів";
		itemsCargoSize[]={10,10};
		simulation="inventoryItem";
		attachments[]=
		{
			"Knife",
			"Pistol"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_100.paa"
		};
	};
	class Custom_ProtectorCase_150: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 150 слотів";
		itemsCargoSize[]={10,15};
		attachments[]=
		{
			"Knife",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_150.paa"
		};
	};
	class Custom_ProtectorCase_300: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 300 слотів";
		itemsCargoSize[]={10,30};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_300.paa"
		};
	};
	class Custom_ProtectorCase_600_abrakadabra: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_600_abrakadabra.paa"
		};
	};
	class Custom_ProtectorCase_600_abrakadabra_2: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_600_abrakadabra_2.paa"
		};
	};
	class Custom_ProtectorCase_600_Toxic: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\Toxic_case.paa"
		};
	};
	class Custom_ProtectorCase_600_kiwi: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_600_kiwi.paa"
		};
	};
	class Custom_ProtectorCase_600_neon: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\VM_Case_600_neon.paa"
		};
	};
	class Custom_ProtectorCase_600_hexagon: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\moon_case_futur_hexagon_co.paa"
		};
	};
	class Custom_ProtectorCase_600_metal_gray: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\moon_case_metal_gray_co.paa"
		};
	};
	class Custom_ProtectorCase_600_metal_green: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\moon_case_metal_green_co.paa"
		};
	};
	class Custom_ProtectorCase_600_waves: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\moon_case_waves_co.paa"
		};
	};
	class Custom_ProtectorCase_600_wood: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 600 слотів";
		itemsCargoSize[]={10,60};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\moon_case_wood_co.paa"
		};
	};
	class Custom_ProtectorCase_1000_wood: Custom_ProtectorCase_25
	{
		descriptionShort="Захисний кейс на 1000 слотів";
		itemsCargoSize[]={10,100};
		inventorySlot[]=
		{
			"VMCase"
		};
		attachments[]=
		{
			"Knife",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\protCases\data\moon_case_wood_co.paa"
		};
	};
};
