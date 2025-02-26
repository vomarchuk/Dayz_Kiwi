modded class ActionDigGardenPlot
{
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		//Client
		if (!GetGame().IsDedicatedServer())
		{
			//Action not allowed if player has broken legs
			if (player.GetBrokenLegs() == eBrokenLegs.BROKEN_LEGS )
				return false;
			
			if (player.IsPlacingLocal())
			{
				Hologram hologram = player.GetHologramLocal();
				GardenPlot item_GP;
				Class.CastTo(item_GP,  hologram.GetProjectionEntity());	
				CheckSurfaceBelowGardenPlot(player, item_GP, hologram);
	
				if (!hologram.IsColliding())
				{
					return true;
				}
			}
			return false;
		}
		//Server
		return true;
	}
};	