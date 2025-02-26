class CraftDisassembleVanillaPistol extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Розібрати на запчастини";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1;
		m_Specialty = -0.01;
		

		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1

		InsertIngredient(0,"Flaregun");
		InsertIngredient(0,"MakarovIJ70");
		InsertIngredient(0,"Colt1911");
		InsertIngredient(0,"Glock19");
		InsertIngredient(0,"CZ75");
		InsertIngredient(0,"Engraved1911");
		InsertIngredient(0,"FNX45");
		InsertIngredient(0,"Deagle");
		InsertIngredient(0,"Deagle_Gold");
		InsertIngredient(0,"Derringer_Grey");
		InsertIngredient(0,"P1");
		InsertIngredient(0,"LongHorn");
		
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1; 
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = false;
      //----------------------------------------------------------------------------------------------------------------------
		InsertIngredient(1,"Pliers")
		m_IngredientAddHealth[1] = -5;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
		//----------------------------------------------------------------------------------------------------------------------
		
		//result
		AddResult("RIP_rivets");
		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 1;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -2;
		m_ResultInheritsColor[0] = -1; 
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;	
		AddResult("RIP_nuts");						
		m_ResultSetFullQuantity[1] = false;	
		m_ResultSetQuantity[1] = 1;			
		m_ResultSetHealth[1] = -1;			
		m_ResultInheritsHealth[1] = -2;		
		m_ResultInheritsColor[1] = -1;
		m_ResultToInventory[1] = -2;
		m_ResultUseSoftSkills[1] = false;	
		m_ResultReplacesIngredient[1] = -1;
		AddResult("RIP_bolts");						
		m_ResultSetFullQuantity[2] = false;	
		m_ResultSetQuantity[2] = 1;			
		m_ResultSetHealth[2] = -1;			
		m_ResultInheritsHealth[2] = -2;		
		m_ResultInheritsColor[2] = -1;
		m_ResultToInventory[2] = -2;
		m_ResultUseSoftSkills[2] = false;	
		m_ResultReplacesIngredient[2] = -1;
		//----------------------------------------------------------------------------------------------------------------------
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};
