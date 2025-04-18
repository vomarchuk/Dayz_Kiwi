
void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		player.RemoveAllItems();

/*
  EntityAI item = player.GetInventory().CreateInInventory(topsArray.GetRandomElement());
  EntityAI item2 = player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
  EntityAI item3 = player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
*/
  EntityAI itemEnt;
  ItemBase itemBs;
		
	// верх одежда
	itemEnt = player.GetInventory().CreateInInventory("ChernarusSportShirt");
	itemBs = ItemBase.Cast(itemEnt);
	// головной убор
	itemEnt = player.GetInventory().CreateInInventory("FlatCap_BlackCheck");
	itemBs = ItemBase.Cast(itemEnt);
	// штаны
	itemEnt = player.GetInventory().CreateInInventory("TrackSuitPants_Blue");
	itemBs = ItemBase.Cast(itemEnt);
	// обувь
	itemEnt = player.GetInventory().CreateInInventory("DressShoes_Black");
	itemBs = ItemBase.Cast(itemEnt);
	// weapon
	itemEnt = player.GetInventory().CreateInInventory("MKII");
	itemBs = ItemBase.Cast(itemEnt);
	// mag
	itemEnt = player.GetInventory().CreateInInventory("Mag_MKII_10Rnd");
	itemBs = ItemBase.Cast(itemEnt);
	// ammo
	itemEnt = player.GetInventory().CreateInInventory("AmmoBox_22_50Rnd");
	itemBs = ItemBase.Cast(itemEnt);
	// фонарик
	itemEnt = player.GetInventory().CreateInInventory("Flashlight");
	itemBs = ItemBase.Cast(itemEnt);
	// еда
	itemEnt = player.GetInventory().CreateInInventory("SardinesCan_Opened");
	itemBs = ItemBase.Cast(itemEnt);
	// нож
	itemEnt = player.GetInventory().CreateInInventory("SteakKnife");
	itemBs = ItemBase.Cast(itemEnt);
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}