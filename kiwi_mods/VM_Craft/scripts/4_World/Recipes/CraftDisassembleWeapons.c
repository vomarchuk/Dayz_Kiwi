class CraftDisassembleWeapons extends RecipeBase
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

		InsertIngredient(0,"SVD");
		InsertIngredient(0,"B95");
		InsertIngredient(0,"VSS");
		InsertIngredient(0,"FAMAS");
		InsertIngredient(0,"AK74");
		InsertIngredient(0,"AKM");
		InsertIngredient(0,"M16A2");
		InsertIngredient(0,"FAL");
		InsertIngredient(0,"AK101");
		InsertIngredient(0,"M4A1");
		InsertIngredient(0,"CZ527");
		InsertIngredient(0,"CZ550");
		InsertIngredient(0,"M14");
		InsertIngredient(0,"Mosin9130");
		InsertIngredient(0,"SKS");
		InsertIngredient(0,"SV98");
		InsertIngredient(0,"Winchester70");

		
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1; 
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = false;
      //----------------------------------------------------------------------------------------------------------------------
		InsertIngredient(1,"Pliers")
		m_IngredientAddHealth[1] = -10;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
		//----------------------------------------------------------------------------------------------------------------------
		
		//result
		AddResult("RIP_rivets");
		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 2;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -2;
		m_ResultInheritsColor[0] = -1; 
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;	
		AddResult("RIP_nuts");						
		m_ResultSetFullQuantity[1] = false;	
		m_ResultSetQuantity[1] = 2;			
		m_ResultSetHealth[1] = -1;			
		m_ResultInheritsHealth[1] = -2;		
		m_ResultInheritsColor[1] = -1;
		m_ResultToInventory[1] = -2;
		m_ResultUseSoftSkills[1] = false;	
		m_ResultReplacesIngredient[1] = -1;
		AddResult("RIP_bolts");						
		m_ResultSetFullQuantity[2] = false;	
		m_ResultSetQuantity[2] = 2;			
		m_ResultSetHealth[2] = -1;			
		m_ResultInheritsHealth[2] = -2;		
		m_ResultInheritsColor[2] = -1;
		m_ResultToInventory[2] = -2;
		m_ResultUseSoftSkills[2] = false;	
		m_ResultReplacesIngredient[2] = -1;
		AddResult("RIP_rivets2");						
		m_ResultSetFullQuantity[3] = false;	
		m_ResultSetQuantity[3] = 2;			
		m_ResultSetHealth[3] = -1;			
		m_ResultInheritsHealth[3] = -2;		
		m_ResultInheritsColor[3] = -1;
		m_ResultToInventory[3] = -2;
		m_ResultUseSoftSkills[3] = false;	
		m_ResultReplacesIngredient[3] = -1;

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
