class CfgPatches
{
	class VMQuestBear
	{
		units[]=
		{
			"VMQuestBear"
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
	class Bear_ColorBase;
	class KIWI_Quest_Bear_Base: Bear_ColorBase
	{
		scope=2;
		displayName="Потертий Ведмедик";
		descriptionShort="Чим більше ви вкладаєте в його вдосконалення, тим більшим скарбом він стає для вашого виживання. Ідеальний супутник для тих, хто готовий пройти свій шлях до максимального інвентаря!";
		itemSize[]={1,2};
		itemsCargoSize[]={2,3};
		inventorySlot[]=
		{
			"VMQuestBear"
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
			"CPlayer\data\questBear\data\teddybear_white.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25000;
				};
			};
		};
	};
	class KIWI_Quest_Bear_2: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №2";
		itemsCargoSize[]={3,3};
	};
	class KIWI_Quest_Bear_3: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №3";
		itemsCargoSize[]={3,4};
	};
	class KIWI_Quest_Bear_4: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №4";
		itemsCargoSize[]={4,4};
	};
	class KIWI_Quest_Bear_5: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №5";
		itemsCargoSize[]={4,5};
	};
	class KIWI_Quest_Bear_6: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №6";
		itemsCargoSize[]={5,5};
	};
	class KIWI_Quest_Bear_7: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №7";
		itemsCargoSize[]={6,5};
	};
	class KIWI_Quest_Bear_8: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №8";
		itemsCargoSize[]={6,7};
	};
	class KIWI_Quest_Bear_9: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №9";
		itemsCargoSize[]={7,7};
	};
	class KIWI_Quest_Bear_10: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №10";
		itemsCargoSize[]={7,8};
	};
	class KIWI_Quest_Bear_11: KIWI_Quest_Bear_Base
	{
		displayName="Потертий Ведмедик №11";
		itemsCargoSize[]={8,8};
	};
};
