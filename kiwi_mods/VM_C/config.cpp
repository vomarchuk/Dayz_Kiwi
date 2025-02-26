class CfgPatches
{
	class VM_C
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
			"TerjeMedicine",
			"DZ_Gear_Camping",
			"DZ_Characters_Pants"
		};
	};
};
class CfgMods
{
	class VM_C
	{
		dir="VM_C";
		name="VM_C";
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
					"VM_C\scripts\4_World"
				};
			};
		};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class Aug_Base: Rifle_Base
	{
	};
	class Aug: Aug_Base
	{
		scope=2;
		displayName="AUG 338";
		descriptionShort="AUG 338 це модифікована версія яка використовує набої .338";
		chamberableFrom[]=
		{
			"SCWS_Ammo_338"
		};
		magazines[]=
		{
			"SCWS_SPEAR_Magazine"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class FOG_TV110T_FastMagBase: Container_Base
	{
		attachments[]=
		{
			"magazine2"
		};
	};
	class FOG_TV110T_FastMag_Tan: FOG_TV110T_FastMagBase
	{
		displayName="TV110 Fast Mag Pouch Tan";
		descriptionShort="Підсумок TV110 Fast Mag Tan — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_TV110T_FastMag_CB: FOG_TV110T_FastMagBase
	{
		displayName="TV110 Fast Mag Pouch CB";
		descriptionShort="Підсумок TV110 Fast Mag CB — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_TV110T_FastMag_Black: FOG_TV110T_FastMagBase
	{
		displayName="TV110 Fast Mag Pouch Black";
		descriptionShort="Підсумок TV110 Fast Mag Black — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_TV110T_FastMag_RG: FOG_TV110T_FastMagBase
	{
		displayName="TV110 Fast Mag Pouch RG";
		descriptionShort="Підсумок TV110 Fast Mag RG — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_TV110T_FastMag_AU: FOG_TV110T_FastMagBase
	{
		displayName="TV110 Fast Mag Pouch AU";
		descriptionShort="Підсумок TV110 Fast Mag AU — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_TV110T_FastMag_FG: FOG_TV110T_FastMagBase
	{
		displayName="TV110 Fast Mag Pouch FG";
		descriptionShort="Підсумок TV110 Fast Mag FG — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_TV110T_FastMag_MC: FOG_TV110T_FastMagBase
	{
		displayName="TV110 Fast Mag Pouch MC";
		descriptionShort="Підсумок TV110 Fast Mag MC — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_SingleMag_Base: Inventory_Base
	{
	};
	class FOG_Pouch_SingleMag_MC: FOG_Pouch_SingleMag_Base
	{
		displayName="Single Mag Pouch MC";
		descriptionShort="Single Mag Pouch MC — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		attachments[]=
		{
			"magazine2"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_SingleMag_MCB: FOG_Pouch_SingleMag_Base
	{
		displayName="Single Mag Pouch MCB";
		descriptionShort="Single Mag Pouch MCB — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		attachments[]=
		{
			"magazine2"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_SingleMag_RG: FOG_Pouch_SingleMag_Base
	{
		displayName="Single Mag Pouch RG";
		descriptionShort="Single Mag Pouch RG — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		attachments[]=
		{
			"magazine2"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_SingleMag_Black: FOG_Pouch_SingleMag_Base
	{
		displayName="Single Mag Pouch Black";
		descriptionShort="Single Mag Pouch Black — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		attachments[]=
		{
			"magazine2"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_SingleMag_CB: FOG_Pouch_SingleMag_Base
	{
		displayName="Single Mag Pouch CB";
		descriptionShort="Single Mag Pouch CB — це високоефективний аксесуар для надійного утримання та швидкого вилучення одного магазину, що забезпечує ефективну перезарядку в тактичних ситуаціях.";
		attachments[]=
		{
			"magazine2"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_Esstac_Base: Inventory_Base
	{
	};
	class FOG_Pouch_Esstac_MC: FOG_Pouch_Esstac_Base
	{
		displayName="Esstac Mag Pouch MC";
		descriptionShort="Esstac Mag Pouch MC - Підсумок для двох пістолетних магазинів з достатнім місцем для розміщення двох запасних перезаряджень.";
		attachments[]=
		{
			"pistol_magazine2",
			"pistol_magazine3"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_Esstac_Black: FOG_Pouch_Esstac_Base
	{
		displayName="Esstac Mag Pouch Black";
		descriptionShort="Esstac Mag Pouch Black - Підсумок для двох пістолетних магазинів з достатнім місцем для розміщення двох запасних перезаряджень.";
		attachments[]=
		{
			"pistol_magazine2",
			"pistol_magazine3"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_Esstac_ALP: FOG_Pouch_Esstac_Base
	{
		displayName="Esstac Mag Pouch ALP";
		descriptionShort="Esstac Mag Pouch ALP - Підсумок для двох пістолетних магазинів з достатнім місцем для розміщення двох запасних перезаряджень.";
		attachments[]=
		{
			"pistol_magazine2",
			"pistol_magazine3"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_Esstac_AOR1: FOG_Pouch_Esstac_Base
	{
		displayName="Esstac Mag Pouch AOR1";
		descriptionShort="Esstac Mag Pouch AOR1 - Підсумок для двох пістолетних магазинів з достатнім місцем для розміщення двох запасних перезаряджень.";
		attachments[]=
		{
			"pistol_magazine2",
			"pistol_magazine3"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_Esstac_AOR2: FOG_Pouch_Esstac_Base
	{
		displayName="Esstac Mag Pouch AOR2";
		descriptionShort="Esstac Mag Pouch AOR2 - Підсумок для двох пістолетних магазинів з достатнім місцем для розміщення двох запасних перезаряджень.";
		attachments[]=
		{
			"pistol_magazine2",
			"pistol_magazine3"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_Esstac_RG: FOG_Pouch_Esstac_Base
	{
		displayName="Esstac Mag Pouch RG";
		descriptionShort="Esstac Mag Pouch RG - Підсумок для двох пістолетних магазинів з достатнім місцем для розміщення двох запасних перезаряджень.";
		attachments[]=
		{
			"pistol_magazine2",
			"pistol_magazine3"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_Esstac_CB: FOG_Pouch_Esstac_Base
	{
		displayName="Esstac Mag Pouch CB";
		descriptionShort="Esstac Mag Pouch CB - Підсумок для двох пістолетних магазинів з достатнім місцем для розміщення двох запасних перезаряджень.";
		attachments[]=
		{
			"pistol_magazine2",
			"pistol_magazine3"
		};
		itemsCargoSize[]={0,0};
	};
	class FOG_Pouch_Mag_KTAR_Base: Container_Base
	{
	};
	class FOG_Pouch_Mag_KTAR_RG: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches RG";
		descriptionShort="FC KTAR Mag Pouches RG - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_CB: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches CB";
		descriptionShort="FC KTAR Mag Pouches CB - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_Black: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches Black";
		descriptionShort="FC KTAR Mag Pouches Black - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_Grey: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches Grey";
		descriptionShort="FC KTAR Mag Pouches Grey - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_MC: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches MC";
		descriptionShort="FC KTAR Mag Pouches MC - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_MCB: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches MCB";
		descriptionShort="FC KTAR Mag Pouches MCB - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_MCA: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches MCA";
		descriptionShort="FC KTAR Mag Pouches MCA - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_MCAL: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches MCAL";
		descriptionShort="FC KTAR Mag Pouches MCAL - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_MCT: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches MCT";
		descriptionShort="FC KTAR Mag Pouches MCT - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_M81: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches M81";
		descriptionShort="FC KTAR Mag Pouches M81 - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_AOR1: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches AOR1";
		descriptionShort="FC KTAR Mag Pouches AOR1 - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_KTAR_AOR2: FOG_Pouch_Mag_KTAR_Base
	{
		displayName="FC KTAR Mag Pouches AOR2";
		descriptionShort="FC KTAR Mag Pouches AOR2 - Розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_Base: Container_Base
	{
	};
	class FOG_Pouch_Mag_TEAR_RG: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches RG";
		descriptionShort="FC TEAR Mag Pouches RG - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_CB: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches CB";
		descriptionShort="FC TEAR Mag Pouches CB - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_Black: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches Black";
		descriptionShort="FC TEAR Mag Pouches Black - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_Grey: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches Grey";
		descriptionShort="FC TEAR Mag Pouches Grey - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_MC: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches MC";
		descriptionShort="FC TEAR Mag Pouches MC - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_MCB: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches MCB";
		descriptionShort="FC TEAR Mag Pouches MCB - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_MCT: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches MCT";
		descriptionShort="FC TEAR Mag Pouches MCT - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_MCA: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches MCA";
		descriptionShort="FC TEAR Mag Pouches MCA - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_MCAL: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches MCAL";
		descriptionShort="FC TEAR Mag Pouches MCAL - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_M81: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches M81";
		descriptionShort="FC TEAR Mag Pouches M81 - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_AOR1: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches AOR1";
		descriptionShort="FC TEAR Mag Pouches AOR1 - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_TEAR_AOR2: FOG_Pouch_Mag_TEAR_Base
	{
		displayName="FC TEAR Mag Pouches AOR2";
		descriptionShort="FC TEAR Mag Pouches AOR2 - Підсумки TEAR Mag, розроблені Ferro Concepts, мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Kangaroo_Base: Container_Base
	{
	};
	class FOG_Pouch_Mag_Kangaroo_MC: FOG_Pouch_Mag_Kangaroo_Base
	{
		displayName="Kangaroo Mag Pouches MC";
		descriptionShort="Kangaroo Mag Pouches MC - Підсумки Kangaroo Mag мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Kangaroo_AOR1: FOG_Pouch_Mag_Kangaroo_Base
	{
		displayName="Kangaroo Mag Pouches AOR1";
		descriptionShort="Kangaroo Mag Pouches AOR1 - Підсумки Kangaroo Mag мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Kangaroo_AOR2: FOG_Pouch_Mag_Kangaroo_Base
	{
		displayName="Kangaroo Mag Pouches AOR2";
		descriptionShort="Kangaroo Mag Pouches AOR2 - Підсумки Kangaroo Mag мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Kangaroo_Black: FOG_Pouch_Mag_Kangaroo_Base
	{
		displayName="Kangaroo Mag Pouches Black";
		descriptionShort="Kangaroo Mag Pouches Black - Підсумки Kangaroo Mag мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Kangaroo_RG: FOG_Pouch_Mag_Kangaroo_Base
	{
		displayName="Kangaroo Mag Pouches RG";
		descriptionShort="Kangaroo Mag Pouches RG - Підсумки Kangaroo Mag мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Kangaroo_CB: FOG_Pouch_Mag_Kangaroo_Base
	{
		displayName="Kangaroo Mag Pouches CB";
		descriptionShort="Kangaroo Mag Pouches CB - Підсумки Kangaroo Mag мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Kangaroo_ALP: FOG_Pouch_Mag_Kangaroo_Base
	{
		displayName="Kangaroo Mag Pouches ALP";
		descriptionShort="Kangaroo Mag Pouches ALP - Підсумки Kangaroo Mag мають підходити до будь-якого плейт-керріера та вміщують три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_SSMK4_Base: Container_Base
	{
	};
	class FOG_Pouch_Mag_SSMK4_CB: FOG_Pouch_Mag_SSMK4_Base
	{
		displayName="Micro Flight Chassis CB";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_SSMK4_RG: FOG_Pouch_Mag_SSMK4_Base
	{
		displayName="Micro Flight Chassis RG";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_SSMK4_Black: FOG_Pouch_Mag_SSMK4_Base
	{
		scope=0;
	};
	class KIWI_MAG_POUTCH_V1: FOG_Pouch_Mag_SSMK4_Black
	{
		scope=2;
		displayName="Підсумок під магазини версії ГРОМ V1";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"VM_C\KIWI_Mag_poutch_co.paa"
		};
	};
	class KIWI_MAG_POUTCH_V2: FOG_Pouch_Mag_SSMK4_Black
	{
		scope=2;
		displayName="Підсумок під магазини версії ГРОМ V2";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує чотири магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"VM_C\KIWI_Mag_poutch_co.paa"
		};
	};
	class KIWI_MAG_POUTCH_V3: FOG_Pouch_Mag_SSMK4_Black
	{
		scope=2;
		displayName="Підсумок під магазини версії ГРОМ V3";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує п'ять магазинів.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine4",
			"magazine5"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"VM_C\KIWI_Mag_poutch_co.paa"
		};
	};
	class KIWI_MAG_POUTCH_V4: FOG_Pouch_Mag_SSMK4_Black
	{
		scope=2;
		displayName="Підсумок під магазини версії ГРОМ V4";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує шість магазинів.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine4",
			"magazine5",
			"magazine6"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"VM_C\KIWI_Mag_poutch_co.paa"
		};
	};
	class FOG_Pouch_Mag_SSMK4_Grey: FOG_Pouch_Mag_SSMK4_Base
	{
		displayName="Micro Flight Chassis Grey";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_SSMK4_MC: FOG_Pouch_Mag_SSMK4_Base
	{
		displayName="Micro Flight Chassis MC";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_SSMK4_MCA: FOG_Pouch_Mag_SSMK4_Base
	{
		displayName="Micro Flight Chassis MCA";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_SSMK4_MCT: FOG_Pouch_Mag_SSMK4_Base
	{
		displayName="Micro Flight Chassis MCT";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_SSMK4_M81: FOG_Pouch_Mag_SSMK4_Base
	{
		displayName="Micro Flight Chassis M81";
		descriptionShort="Переобладнаний у плейткерріерний плекард, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_LV119_Base: Container_Base
	{
	};
	class FOG_Pouch_Mag_LV119_CB: FOG_Pouch_Mag_LV119_Base
	{
		displayName="LV119 Placard CB";
		descriptionShort="Відокремлений плекард LV119, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_LV119_RG: FOG_Pouch_Mag_LV119_Base
	{
		displayName="LV119 Placard RG";
		descriptionShort="Відокремлений плекард LV119, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_LV119_OD: FOG_Pouch_Mag_LV119_Base
	{
		displayName="LV119 Placard OD";
		descriptionShort="Відокремлений плекард LV119, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_LV119_Black: FOG_Pouch_Mag_LV119_Base
	{
		displayName="LV119 Placard Black";
		descriptionShort="Відокремлений плекард LV119, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_LV119_MC: FOG_Pouch_Mag_LV119_Base
	{
		displayName="LV119 Placard MC";
		descriptionShort="Відокремлений плекард LV119, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_LV119_MCB: FOG_Pouch_Mag_LV119_Base
	{
		displayName="LV119 Placard MCB";
		descriptionShort="Відокремлений плекард LV119, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_AVS_Base: Container_Base
	{
	};
	class FOG_Pouch_Mag_AVS_CB: FOG_Pouch_Mag_AVS_Base
	{
		displayName="AVS Mag Pouches CB";
		descriptionShort="AVS Mag Pouches, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_AVS_RG: FOG_Pouch_Mag_AVS_Base
	{
		displayName="AVS Mag Pouches RG";
		descriptionShort="AVS Mag Pouches, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_AVS_MC: FOG_Pouch_Mag_AVS_Base
	{
		displayName="AVS Mag Pouches MC";
		descriptionShort="AVS Mag Pouches, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_AVS_Black: FOG_Pouch_Mag_AVS_Base
	{
		displayName="AVS Mag Pouches Black";
		descriptionShort="AVS Mag Pouches, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_AVS_AOR1: FOG_Pouch_Mag_AVS_Base
	{
		displayName="AVS Mag Pouches AOR1";
		descriptionShort="AVS Mag Pouches, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_AVS_AOR2: FOG_Pouch_Mag_AVS_Base
	{
		displayName="AVS Mag Pouches AOR2";
		descriptionShort="AVS Mag Pouches, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_AVS_ALP: FOG_Pouch_Mag_AVS_Base
	{
		displayName="AVS Mag Pouches ALP";
		descriptionShort="AVS Mag Pouches, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_BlueFor_Base: Container_Base
	{
	};
	class FOG_Pouch_Mag_BlueFor_MC: FOG_Pouch_Mag_BlueFor_Base
	{
		displayName="BlueForce Mag Pouches MC";
		descriptionShort="BlueForce Magazine Sleeve Pouches MC, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_BlueFor_RG: FOG_Pouch_Mag_BlueFor_Base
	{
		displayName="BlueForce Mag Pouches RG";
		descriptionShort="BlueForce Magazine Sleeve Pouches RG, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_BlueFor_CB: FOG_Pouch_Mag_BlueFor_Base
	{
		displayName="BlueForce Mag Pouches CB";
		descriptionShort="BlueForce Magazine Sleeve Pouches CB, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_BlueFor_Black: FOG_Pouch_Mag_BlueFor_Base
	{
		displayName="BlueForce Mag Pouches Black";
		descriptionShort="BlueForce Magazine Sleeve Pouches Black, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_BlueFor_AOR1: FOG_Pouch_Mag_BlueFor_Base
	{
		displayName="BlueForce Mag Pouches AOR1";
		descriptionShort="BlueForce Magazine Sleeve Pouches AOR1, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_BlueFor_AOR2: FOG_Pouch_Mag_BlueFor_Base
	{
		displayName="BlueForce Mag Pouches AOR2";
		descriptionShort="BlueForce Magazine Sleeve Pouches AOR2, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_BlueFor_ALP: FOG_Pouch_Mag_BlueFor_Base
	{
		displayName="BlueForce Mag Pouches ALP";
		descriptionShort="BlueForce Magazine Sleeve Pouches ALP, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_Base: Container_Base
	{
	};
	class FOG_Pouch_Mag_Dope_RG: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches RG";
		descriptionShort="DOPE Mag Pouches RG, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_CB: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches CB";
		descriptionShort="DOPE Mag Pouches CB, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_Black: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches Black";
		descriptionShort="DOPE Mag Pouches Black, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_Grey: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches Grey";
		descriptionShort="DOPE Mag Pouches Grey, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_MC: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches MC";
		descriptionShort="DOPE Mag Pouches MC, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_MCB: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches MCB";
		descriptionShort="DOPE Mag Pouches MCB, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_MCA: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches MCA";
		descriptionShort="DOPE Mag Pouches MCA, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_MCT: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches MCT";
		descriptionShort="DOPE Mag Pouches MCT, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_MCAL: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches MCAL";
		descriptionShort="DOPE Mag Pouches MCAL, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_M81: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches M81";
		descriptionShort="DOPE Mag Pouches M81, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_AOR1: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches AOR1";
		descriptionShort="DOPE Mag Pouches AOR1, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class FOG_Pouch_Mag_Dope_AOR2: FOG_Pouch_Mag_Dope_Base
	{
		displayName="DOPE Mag Pouches AOR2";
		descriptionShort="DOPE Mag Pouches AOR2, має підходити до будь-якого плейт-керріера та вміщує три магазини.";
		attachments[]=
		{
			"magazine2",
			"magazine3",
			"magazine4"
		};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{
			"extra_mag_pouch",
			"VestPouch"
		};
	};
	class Clothing;
	class FOG_Vest_Gen4_ColorBase: Clothing
	{
		displayName="Бронежилет IOTV Gen5";
		descriptionShort="Покращений зовнішній тактичний бронежилет Gen V розроблений для забезпечення максимальної свободи рухів, необхідної для прийняття правильних положень при стрільбі, зберігаючи при цьому спритність для виконання та маневрування завдань. Оптимальні конструктивні характеристики гарантують найкращий можливий розподіл ваги як балістичної броні, так i додаткового спорядження, що забезпечує підвищений комфорт, тривалість носіння та мобільність.";
		itemSize[]={3,4};
		attachments[]=
		{
			"WalkieTalkie",
			"Chemlight",
			"FOG_big_patch",
			"FOG_tourniquet",
			"VestHolster",
			"VestPouch",
			"extra_mag_pouch",
			"FOG_admin_small",
			"FOG_VestSlotFR",
			"FOG_gren_pouch",
			"FOG_ifak_vest",
			"Belt_Left",
			"FOG_vest_panel"
		};
	};
	class FOG_Vest_CPC_Base: Clothing
	{
		displayName="Бронежилет Cage Plate Carrier CPC";
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
	};
};
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		inventorySlot[]+=
		{
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10"
		};
	};
	class Mag_FNX45_15Rnd: Magazine_Base
	{
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"pistol_magazine2",
			"pistol_magazine3"
		};
	};
	class Mag_Deagle_9rnd: Magazine_Base
	{
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"pistol_magazine2",
			"pistol_magazine3"
		};
	};
	class Mag_1911_7Rnd: Magazine_Base
	{
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"pistol_magazine2",
			"pistol_magazine3"
		};
	};
	class Mag_CZ75_15Rnd: Magazine_Base
	{
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"pistol_magazine2",
			"pistol_magazine3"
		};
	};
	class Mag_Glock_15Rnd: Magazine_Base
	{
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"pistol_magazine2",
			"pistol_magazine3"
		};
	};
	class Mag_P1_8Rnd: Magazine_Base
	{
		inventorySlot[]=
		{
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"magazine",
			"magazine2",
			"magazine3",
			"magazine4",
			"magazine5",
			"magazine6",
			"magazine7",
			"magazine8",
			"magazine9",
			"magazine10",
			"pistol_magazine2",
			"pistol_magazine3"
		};
	};
};
class CfgSlots
{
	class Slot_magazine2
	{
		name="magazine2";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	class Slot_magazine3
	{
		name="magazine3";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	class Slot_magazine4
	{
		name="magazine4";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	class Slot_magazine5
	{
		name="magazine5";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	class Slot_magazine6
	{
		name="magazine6";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	class Slot_pistol_magazine2
	{
		name="pistol_magazine2";
		displayName="Magazine";
		ghostIcon="magazine";
	};
	class Slot_pistol_magazine3
	{
		name="pistol_magazine3";
		displayName="Magazine";
		ghostIcon="magazine";
	};
	class Slot_Extra_Mag_Pouth
	{
		name="extra_mag_pouch";
		displayName="Підсумок на 3 магазини";
		ghostIcon="set:dayz_inventory image:vestpouches";
	};
	class Slot_Extra_Mag_Pouth2
	{
		name="extra_mag_pouch2";
		displayName="Підсумок на 3 магазини";
		ghostIcon="set:dayz_inventory image:vestpouches";
	};
	class Slot_Extra_Mag_Pouth3
	{
		name="extra_mag_pouch3";
		displayName="Підсумок на 3 магазини";
		ghostIcon="vestpouches";
	};
};
