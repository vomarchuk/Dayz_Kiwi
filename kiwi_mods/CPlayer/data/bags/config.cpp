class CfgPatches
{
	class VM_Bags
	{
		units[]=
		{
			"Kiwi_Bag_01"
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
			"DZ_Characters",
			"Nomad_Backpack",
			"DZ_Gear_Containers"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class MountainBag_ColorBase;
	class Kiwi_Bag_01: MountainBag_ColorBase
	{
		scope=2;
		displayName="Тактичний похідний рюкзак Виживальник";
		descriptionShort="Цей кастомний рюкзак створений для справжніх виживальників, які цінують комфорт та функціональність у дикій природі. Виготовлений із посиленої водостійкої тканини, він чудово витримує суворі умови виживання. Завдяки місткому основному відділенню та кільком додатковим кишеням, рюкзак ідеально підходить для зберігання боєприпасів, їжі, медикаментів та інструментів.";
		attachments[]=
		{
			"Melee",
			"Shoulder",
			"Knife",
			"WalkieTalkie",
			"CookingEquipment",
			"waterproofbag",
			"VMFirstAidKit",
			"GPSReceiver",
			"FOG_M50_Belt"
		};
		itemsCargoSize[]={10,15};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\bags\data\bag_02.paa",
			"CPlayer\data\bags\data\bag_02.paa",
			"CPlayer\data\bags\data\bag_02.paa"
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
	class WaterproofBag_ColorBase;
	class KIWI_water_proof_bag: WaterproofBag_ColorBase
	{
		scope=2;
		itemSize[]={5,5};
		itemsCargoSize[]={10,6};
		hiddenSelectionsTextures[]=
		{
			"CPlayer\data\bags\data\Kiwi_water_proof_bag.paa"
		};
	};
	class Nomadbackpack_v3_ColorBase: Clothing
	{
	};
	class Nomadbackpack_v3_BaseColor: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_AoR2: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Woodland: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Winter: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Blue: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Teal: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Grey: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Green: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Red: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Yellow: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
	class Nomadbackpack_v3_Black: Nomadbackpack_v3_ColorBase
	{
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag"
		};
		itemsCargoSize[]={10,15};
	};
};
