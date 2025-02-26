modded class PluginRecipesManager
{
  override void RegisterRecipies()
  {
    super.RegisterRecipies();
    RegisterRecipe(new CraftDisassembleMag);
    RegisterRecipe(new CraftDisassembleVanillaPistol);
    RegisterRecipe(new CraftDisassembleElectroItems);
    RegisterRecipe(new CraftDisassembleItems);
    RegisterRecipe(new CraftDisassembleOptic);
    RegisterRecipe(new CraftDisassembleWeapons);
    RegisterRecipe(new CraftDisassembleVanillaVests);
    RegisterRecipe(new RepairPliers);
    RegisterRecipe(new RepairWirecutter);
    RegisterRecipe(new CraftEmptyBagCanabis);
    RegisterRecipe(new UpGradeVM_Blackout_Ops_Jacket_01_V2);
    RegisterRecipe(new UpGradeVM_Blackout_Ops_Jacket_01_V3);
    RegisterRecipe(new UpGradeVM_Blackout_Ops_Jacket_01_V4);
    RegisterRecipe(new UpGradeVM_Blackout_Ops_Pants_01_V2);
    RegisterRecipe(new UpGradeVM_Blackout_Ops_Pants_01_V3);
    RegisterRecipe(new UpGradeVM_Blackout_Ops_Pants_01_V4);
  }
}