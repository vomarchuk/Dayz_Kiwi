class CraftDisassembleMag extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Розібрати на запчастини";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check, Is a check on the Min Dmg
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1

		InsertIngredient(0,"Mag_SVD_10Rnd");
		InsertIngredient(0,"Mag_STANAG_30Rnd");
		InsertIngredient(0,"Mag_STANAGCoupled_30Rnd");
		InsertIngredient(0,"Mag_AKM_30Rnd");
		InsertIngredient(0,"Mag_AK101_30Rnd");
		InsertIngredient(0,"Mag_AK74_30Rnd");
		InsertIngredient(0,"Mag_AKM_Drum75Rnd");
		InsertIngredient(0,"Mag_CMAG_30Rnd");
		InsertIngredient(0,"Mag_AKM_Palm30Rnd");
		InsertIngredient(0,"Mag_CMAG_10Rnd");
		InsertIngredient(0,"Mag_FAL_20Rnd");
		InsertIngredient(0,"Mag_CMAG_20Rnd");
		InsertIngredient(0,"Mag_CMAG_40Rnd");
		InsertIngredient(0,"Mag_Saiga_5Rnd");
		InsertIngredient(0,"Mag_Saiga_8Rnd");
		InsertIngredient(0,"Mag_Saiga_Drum20Rnd");
		InsertIngredient(0,"Mag_VSS_10Rnd");
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Screwdriver");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("RIP_rivets");						// add results here
		m_ResultSetFullQuantity[0] = false;		// true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 2;			// -1 = do nothing
		m_ResultSetHealth[0] = -1;				// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;			// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;			// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;			// (value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;		// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;		// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
		
		//result2

		AddResult("RIP_Plastik");						
		m_ResultSetFullQuantity[1] = false;	
		m_ResultSetQuantity[1] = 1;			
		m_ResultSetHealth[1] = -1;			
		m_ResultInheritsHealth[1] = -2;		
		m_ResultInheritsColor[1] = -1;
		m_ResultToInventory[1] = -2;
		m_ResultUseSoftSkills[1] = false;	
		m_ResultReplacesIngredient[1] = -1;
		//----------------------------------------------------------------------------------------------------------------------
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};
