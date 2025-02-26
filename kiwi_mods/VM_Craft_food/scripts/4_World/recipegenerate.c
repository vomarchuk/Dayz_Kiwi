modded class PluginRecipesManager
{
  override void RegisterRecipies()
  {
    super.RegisterRecipies();
    RegisterRecipe(new CFT_CanEmpty);
    RegisterRecipe(new CFT_CanSalt);
    RegisterRecipe(new CFT_CanRabbit);
    RegisterRecipe(new CFT_CanChicken);
    RegisterRecipe(new CFT_CanPig);
    RegisterRecipe(new CFT_CanCow);
    RegisterRecipe(new CFT_CanDeer);
    RegisterRecipe(new CFT_CanSheep);
    RegisterRecipe(new CFT_CanWolf);
    RegisterRecipe(new CFT_CanGoat);
    RegisterRecipe(new CFT_CanBear);
    // RegisterRecipe(new CFT_CanBoar);
    RegisterRecipe(new CFT_CanFox);
  }
}