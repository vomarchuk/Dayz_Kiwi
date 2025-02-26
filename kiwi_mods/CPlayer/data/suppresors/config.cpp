class CfgPatches
{
	class VM_Suppressors
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
			"DZ_Gear_Camping"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class ItemSuppressor;
	class SCWS_408Suppressor_Base: Inventory_Base
	{
	};
	class SCWS_408_Suppressor: SCWS_408Suppressor_Base
	{
		displayName="Wrapped .408CheyTac Suppressor.";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.75;
	};
	class SCWS_UniSuppressor_Base: Inventory_Base
	{
	};
	class SCWS_Uni_Suppressor_Black: SCWS_UniSuppressor_Base
	{
		displayName="Wrapped Universal Suppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.80000001;
	};
	class SCWSUni_Suppressor_Tan: SCWS_UniSuppressor_Base
	{
		scope=0;
		displayName="Wrapped Universal Suppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.80000001;
	};
	class SCWS_Uni_Suppressor_Gold: SCWS_UniSuppressor_Base
	{
		scope=0;
		displayName="Wrapped Universal Suppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.80000001;
	};
	class SCWS_Suppressor_Legion: ItemSuppressor
	{
	};
	class SCWS_Suppressor_Legion_Black: SCWS_Suppressor_Legion
	{
		descriptionShort="A suppressor fitted for the .338 Lapua caliber rifles.";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.80000001;
		itemSize[]={3,1};
	};
	class SCWS_9mm_Suppressor_Base: Inventory_Base
	{
	};
	class SCWS_9mm_Suppressor: SCWS_9mm_Suppressor_Base
	{
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.89999998;
		itemSize[]={2,1};
	};
	class PistolSuppressor: ItemSuppressor
	{
		noiseShootModifier=-0.85000002;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\gemtech_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class AK_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.80000001;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=6;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\gemtech_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class M4_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.80000001;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=6;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\gemtech_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
