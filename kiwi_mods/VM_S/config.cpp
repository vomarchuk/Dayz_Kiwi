class CfgPatches
{
	class VM_S
	{
		utins[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Vests",
			"DZ_Characters_Tops",
			"DZ_Characters_Masks",
			"DZ_Characters_Headgear",
			"DZ_Gear_Pants",
			"DZ_Gear_Camping",
			"DZ_Gear_Crafting",
			"DZ_Gear_Tools",
			"DZ_Gear_Containers",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Projectiles",
			"DZ_Pistols",
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class VM_S
	{
		dir="VM_S";
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
	};
};
class cfgWeapons
{
	class Pistol_Base;
	class Colt1911_Base: Pistol_Base
	{
	};
	class Colt1911: Colt1911_Base
	{
		itemSize[]={3,1};
	};
	class Engraved1911: Colt1911_Base
	{
		itemSize[]={3,1};
	};
	class CZ75_Base: Pistol_Base
	{
	};
	class CZ75: CZ75_Base
	{
		itemSize[]={3,1};
	};
	class Deagle_Base: Pistol_Base
	{
	};
	class Deagle: Deagle_Base
	{
		itemSize[]={3,1};
	};
	class Flaregun_Base: Pistol_Base
	{
	};
	class Flaregun: Flaregun_Base
	{
		itemSize[]={3,1};
	};
	class FNX45_Base: Pistol_Base
	{
	};
	class FNX45: FNX45_Base
	{
		itemSize[]={3,1};
	};
	class LongHorn_Base: Pistol_Base
	{
	};
	class LongHorn: LongHorn_Base
	{
		itemSize[]={3,1};
	};
	class Glock19_Base: Pistol_Base
	{
	};
	class Glock19: Glock19_Base
	{
		itemSize[]={3,1};
	};
	class Magnum_Base: Pistol_Base
	{
	};
	class Magnum: Magnum_Base
	{
		itemSize[]={3,1};
	};
	class MKII_Base: Pistol_Base
	{
	};
	class MKII: MKII_Base
	{
		itemSize[]={3,1};
	};
	class P1_Base: Pistol_Base
	{
	};
	class P1: P1_Base
	{
		itemSize[]={3,1};
	};
	class MakarovPB_Base: Pistol_Base
	{
	};
	class MakarovPB: MakarovPB_Base
	{
		itemSize[]={3,1};
	};
	class MakarovIJ70_Base: Pistol_Base
	{
	};
	class MakarovIJ70: MakarovIJ70_Base
	{
		itemSize[]={3,1};
	};
	class Red9_Base: Pistol_Base
	{
	};
	class Red9: Red9_Base
	{
		itemSize[]={3,1};
	};
	class Rifle_Base;
	class MP5K_Base: Rifle_Base
	{
	};
	class MP5K: MP5K_Base
	{
		itemSize[]={4,2};
	};
	class CZ61_Base: Rifle_Base
	{
	};
	class CZ61: CZ61_Base
	{
		itemSize[]={4,2};
	};
	class PP19_Base: Rifle_Base
	{
	};
	class PP19: PP19_Base
	{
		itemSize[]={5,2};
	};
	class UMP45_Base: Rifle_Base
	{
	};
	class UMP45: UMP45_Base
	{
		itemSize[]={5,2};
	};
	class M4A1_Base: Rifle_Base
	{
	};
	class M4A1: M4A1_Base
	{
		itemSize[]={7,2};
	};
	class AK101_Base: Rifle_Base
	{
	};
	class AK101: AK101_Base
	{
		itemSize[]={7,2};
	};
	class AKM_Base: Rifle_Base
	{
	};
	class AKM: AKM_Base
	{
		itemSize[]={7,2};
	};
	class Aug_Base: Rifle_Base
	{
	};
	class AugShort: Aug_Base
	{
		itemSize[]={7,2};
	};
	class Aug: Aug_Base
	{
		itemSize[]={7,2};
	};
	class Famas_Base: Rifle_Base
	{
	};
	class FAMAS: Famas_Base
	{
		itemSize[]={7,2};
	};
	class FAL_Base: Rifle_Base
	{
	};
	class FAL: FAL_Base
	{
		itemSize[]={7,2};
	};
	class AK74_Base: Rifle_Base
	{
	};
	class AK74: AK74_Base
	{
		itemSize[]={7,2};
	};
	class M16A2_Base: Rifle_Base
	{
	};
	class M16A2: M16A2_Base
	{
		itemSize[]={7,2};
	};
	class AKS74U: AK74_Base
	{
		itemSize[]={5,2};
	};
	class Izh18_Base: Rifle_Base
	{
	};
	class Izh18: Izh18_Base
	{
		itemSize[]={8,1};
	};
	class SawedoffIzh18: Izh18
	{
		itemSize[]={5,1};
	};
	class Ruger1022_Base: Rifle_Base
	{
	};
	class Ruger1022: Ruger1022_Base
	{
		itemSize[]={8,1};
	};
	class B95_Base: Rifle_Base
	{
	};
	class B95: B95_Base
	{
		itemSize[]={8,1};
	};
	class SawedoffB95: B95_Base
	{
		itemSize[]={5,1};
	};
	class GP25Base: Rifle_Base
	{
	};
	class GP25: GP25Base
	{
		scope=0;
	};
	class GP25_Standalone: GP25Base
	{
		scope=0;
	};
	class BoltActionRifle_InnerMagazine_Base;
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
	};
	class Mosin9130: Mosin9130_Base
	{
		itemSize[]={9,1};
	};
	class SawedoffMosin9130_Base: Mosin9130_Base
	{
	};
	class SawedoffMosin9130: SawedoffMosin9130_Base
	{
		itemSize[]={6,1};
	};
	class BoltActionRifle_ExternalMagazine_Base;
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class CZ550: CZ550_Base
	{
		itemSize[]={9,1};
	};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class CZ527: CZ527_Base
	{
		itemSize[]={9,1};
	};
	class Scout_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class Scout: Scout_Base
	{
		itemSize[]={8,1};
	};
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class SSG82: SSG82_Base
	{
		itemSize[]={8,1};
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
	};
	class Winchester70: Winchester70_Base
	{
		itemSize[]={9,1};
	};
	class SV98_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class SV98: SV98_Base
	{
		itemSize[]={8,1};
	};
	class SVD_Base: Rifle_Base
	{
	};
	class SVD: SVD_Base
	{
		itemSize[]={9,1};
	};
	class SKS_Base: Rifle_Base
	{
	};
	class SKS: SKS_Base
	{
		itemSize[]={8,1};
	};
	class Repeater_Base: Rifle_Base
	{
	};
	class Repeater: Repeater_Base
	{
		itemSize[]={8,1};
	};
	class M14_Base: Rifle_Base
	{
	};
	class M14: M14_Base
	{
		itemSize[]={8,1};
	};
	class VSS_Base: Rifle_Base
	{
	};
	class VSS: VSS_Base
	{
		itemSize[]={7,2};
	};
	class ASVAL: VSS_Base
	{
		itemSize[]={7,2};
	};
	class Shotgun_Base;
	class Mp133Shotgun_Base: Shotgun_Base
	{
	};
	class Mp133Shotgun: Mp133Shotgun_Base
	{
		itemSize[]={9,1};
	};
	class Saiga_Base: Rifle_Base
	{
	};
	class Saiga: Saiga_Base
	{
		itemSize[]={5,2};
	};
	class Archery_Base;
	class Crossbow_Base: Archery_Base
	{
		itemSize[]={5,3};
	};
	class QuickieBow: Archery_Base
	{
		scope=0;
	};
	class PVCBow: Archery_Base
	{
		scope=0;
	};
	class RecurveBow: Archery_Base
	{
		scope=0;
	};
	class Groza_Base: Rifle_Base
	{
	};
	class Groza: Groza_Base
	{
		scope=0;
	};
};
class cfgVehicles
{
	class Edible_Base;
	class Switchable_Base;
	class ItemOptics;
	class FishingRod_Base;
	class Bottle_Base;
	class Container_Base;
	class Inventory_Base;
	class FishingRod_Base_New: FishingRod_Base
	{
	};
	class FishingRod: FishingRod_Base_New
	{
		itemSize[]={1,4};
	};
	class CanisterGasoline: Bottle_Base
	{
		itemSize[]={4,5};
	};
	class PlateCarrierPouches: Container_Base
	{
		itemSize[]={3,2};
	};
	class MetalPlate: Inventory_Base
	{
		itemSize[]={5,5};
	};
	class TireRepairKit: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class Wrench: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class LugWrench: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class Pipe: Inventory_Base
	{
		itemSize[]={1,4};
	};
	class Flashlight: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class RoadFlare: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Bone: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class Hatchet: Inventory_Base
	{
		itemSize[]={1,4};
	};
	class WoodAxe: Inventory_Base
	{
		itemSize[]={1,6};
	};
	class FirefighterAxe: Inventory_Base
	{
		itemSize[]={1,6};
	};
	class Pickaxe: Inventory_Base
	{
		itemSize[]={2,6};
	};
	class Shovel: Inventory_Base
	{
		itemSize[]={2,6};
	};
	class GorkaHelmetVisor: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class FieldShovel: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class Crowbar: Inventory_Base
	{
		itemSize[]={1,3};
	};
	class WoodenPlank: Inventory_Base
	{
		itemSize[]={1,7};
	};
	class ItemSuppressor: Inventory_Base
	{
	};
	class PistolSuppressor: ItemSuppressor
	{
		itemSize[]={2,1};
	};
	class WaterBottle: Bottle_Base
	{
		itemSize[]={1,2};
	};
	class Clothing;
	class WoolGlovesFingerless_ColorBase: Clothing
	{
	};
	class WoolGlovesFingerless_Green: WoolGlovesFingerless_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGlovesFingerless_Black: WoolGlovesFingerless_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGlovesFingerless_Tan: WoolGlovesFingerless_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGlovesFingerless_White: WoolGlovesFingerless_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGlovesFingerless_ChristmasBlue: WoolGlovesFingerless_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGlovesFingerless_ChristmasRed: WoolGlovesFingerless_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGloves_ColorBase: Clothing
	{
	};
	class WoolGloves_Green: WoolGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGloves_Black: WoolGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGloves_Tan: WoolGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGloves_White: WoolGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGloves_ChristmasBlue: WoolGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WoolGloves_ChristmasRed: WoolGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WorkingGloves_ColorBase: Clothing
	{
	};
	class WorkingGloves_Black: WorkingGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WorkingGloves_Beige: WorkingGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WorkingGloves_Brown: WorkingGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class WorkingGloves_Yellow: WorkingGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class TacticalGloves_ColorBase: Clothing
	{
	};
	class TacticalGloves_Black: TacticalGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class TacticalGloves_Beige: TacticalGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class TacticalGloves_Green: TacticalGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class SkiGloves_ColorBase: Clothing
	{
	};
	class SkiGloves_Blue: SkiGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class SkiGloves_Red: SkiGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class SkiGloves_90s: SkiGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class PaddedGloves_ColorBase: Clothing
	{
	};
	class PaddedGloves_Brown: PaddedGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class PaddedGloves_Beige: PaddedGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class PaddedGloves_Threat: PaddedGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class OMNOGloves_ColorBase: Clothing
	{
	};
	class OMNOGloves_Gray: OMNOGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class OMNOGloves_Brown: OMNOGloves_ColorBase
	{
		itemSize[]={1,2};
	};
	class AthleticShoes_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class JoggingShoes_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class Sneakers_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class HikingBootsLow_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class WorkingBoots_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class HikingBoots_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class CombatBoots_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class JungleBoots_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class Wellies_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class MilitaryBoots_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class TTSKOBoots: Clothing
	{
		itemSize[]={2,2};
	};
	class ConstructionHelmet_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class SkateHelmet_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class HockeyHelmet_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class DirtBikeHelmet_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class TankerHelmet: Clothing
	{
		itemSize[]={2,2};
	};
	class MotoHelmet_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class Ssh68Helmet: Clothing
	{
		itemSize[]={2,2};
	};
	class GorkaHelmet: Clothing
	{
		itemSize[]={2,2};
	};
	class FirefightersHelmet_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class BallisticHelmet_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class ZSh3PilotHelmet: Clothing
	{
		itemSize[]={2,2};
	};
	class GreatHelm: Clothing
	{
		itemSize[]={3,3};
	};
	class DirtBikeHelmet_Mouthguard: Clothing
	{
		itemSize[]={2,1};
	};
	class DirtBikeHelmet_Visor: Clothing
	{
		itemSize[]={2,1};
	};
	class SportGlasses_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class NVGHeadstrap: Clothing
	{
		itemSize[]={2,2};
	};
	class HockeyMask: Clothing
	{
		itemSize[]={2,2};
	};
	class WeldingMask: Clothing
	{
		itemSize[]={2,2};
	};
	class Balaclava3Holes_ColorBase: Clothing
	{
		itemSize[]={1,2};
	};
	class NioshFaceMask: Clothing
	{
		itemSize[]={1,1};
	};
	class SurgicalMask: Clothing
	{
		itemSize[]={1,1};
	};
	class MedicalScrubsHat_ColorBase: Clothing
	{
		itemSize[]={1,1};
	};
	class Bandana_ColorBase: Clothing
	{
		itemSize[]={1,1};
	};
	class OfficerHat: Clothing
	{
		itemSize[]={3,1};
	};
	class FlatCap_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class BeanieHat_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class ZmijovkaCap_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class RadarCap_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class Ushanka_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class WinterCoif_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class PoliceCap: Clothing
	{
		itemSize[]={3,1};
	};
	class CowboyHat_ColorBase: Clothing
	{
		itemSize[]={3,1};
	};
	class BaseballCap_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class BoonieHat_ColorBase: Clothing
	{
		itemSize[]={2,1};
	};
	class PrisonerCap: Clothing
	{
		itemSize[]={2,1};
	};
	class PlateCarrierVest: Clothing
	{
		itemSize[]={3,4};
	};
	class TacticalShirt_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class DenimJacket: Clothing
	{
		itemSize[]={3,3};
	};
	class WoolCoat_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class BomberJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FirefighterJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class QuiltedJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class ManSuit_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class HuntingJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class RidersJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class JumpsuitJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class ParamedicJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class HikingJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class PoliceJacketOrel: Clothing
	{
		itemSize[]={3,3};
	};
	class PoliceJacket: Clothing
	{
		itemSize[]={3,3};
	};
	class USMCJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class HighCapacityVest_ColorBase: Clothing
	{
		itemSize[]={3,4};
	};
	class PressVest_ColorBase: Clothing
	{
		itemSize[]={3,4};
	};
	class ReflexVest: Clothing
	{
		itemSize[]={2,3};
	};
	class GorkaPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class TrackSuitPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class SlacksPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class ParamedicPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class MedicalScrubsPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class PrisonUniformPants: Clothing
	{
		itemSize[]={2,3};
	};
	class FirefightersPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class TTSKOPants: Clothing
	{
		itemSize[]={2,3};
	};
	class CargoPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class USMCPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class BDUPants: Clothing
	{
		itemSize[]={2,3};
	};
	class PolicePantsOrel: Clothing
	{
		itemSize[]={2,3};
	};
	class HunterPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class ItemOptics_Base: ItemOptics
	{
	};
	class StarlightOptic: ItemOptics_Base
	{
		itemSize[]={3,1};
	};
	class LongrangeOptic: ItemOptics_Base
	{
		itemSize[]={1,2};
	};
	class KobraOptic: ItemOptics_Base
	{
		itemSize[]={2,1};
	};
	class KashtanOptic: ItemOptics_Base
	{
		itemSize[]={2,1};
	};
	class PSO1Optic: ItemOptics_Base
	{
		itemSize[]={3,1};
	};
	class UniversalLight: Switchable_Base
	{
		itemSize[]={1,1};
	};
	class Headtorch_ColorBase: Switchable_Base
	{
		itemSize[]={2,1};
	};
	class GP5GasMask: Clothing
	{
		itemSize[]={2,2};
	};
	class GP5GasMask_Filter: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class GasMask: Clothing
	{
		itemSize[]={2,2};
	};
	class NBCGloves_ColorBase: Clothing
	{
		itemSize[]={1,2};
	};
	class NBCHoodBase: Clothing
	{
		itemSize[]={1,2};
	};
	class PortableGasLamp: Inventory_Base
	{
		itemSize[]={2,3};
	};
	class GorkaEJacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class PipeWrench: Inventory_Base
	{
		itemSize[]={1,4};
	};
	class DuctTape: Inventory_Base
	{
		itemSize[]={1,1};
	};
	class WeaponCleaningKit: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class LeatherSewingKit: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class ElectronicRepairKit: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class ACOGOptic_6x: ItemOptics_Base
	{
		itemSize[]={2,1};
	};
	class SmallGasCanister: Inventory_Base
	{
		itemSize[]={2,1};
	};
	class MediumGasCanister: Inventory_Base
	{
		itemSize[]={2,2};
	};
	class LargeGasCanister: Inventory_Base
	{
		itemSize[]={2,3};
	};
	class PlateCarrierHolster: Clothing
	{
		itemSize[]={1,2};
	};
	class BakedBeansCan: Edible_Base
	{
		itemSize[]={1,2};
	};
	class BakedBeansCan_Opened: Edible_Base
	{
		itemSize[]={1,2};
	};
	class TacticalBaconCan: Edible_Base
	{
		itemSize[]={1,2};
	};
	class TacticalBaconCan_Opened: Edible_Base
	{
		itemSize[]={1,2};
	};
	class SpaghettiCan: Edible_Base
	{
		itemSize[]={1,2};
	};
	class SpaghettiCan_Opened: Edible_Base
	{
		itemSize[]={1,2};
	};
	class PeachesCan: Edible_Base
	{
		itemSize[]={1,2};
	};
	class PeachesCan_Opened: Edible_Base
	{
		itemSize[]={1,2};
	};
	class SalineBag: Inventory_Base
	{
		itemSize[]={1,2};
	};
	class FOG_Tactical_Fingerless_Gloves_ColorBase: Clothing
	{
		itemSize[]={1,2};
	};
	class FOG_GunGloves_ColorBase: Clothing
	{
		itemSize[]={1,2};
	};
	class FOG_FerroGloves_ColorBase: Clothing
	{
		itemSize[]={1,2};
	};
	class FOG_DEFCONVans_Shoes_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class FOG_Zypher_Boots_Base: Clothing
	{
		itemSize[]={2,2};
	};
	class FOG_Lerch_Boots_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class FOG_Operator_Boots_ColorBase: Clothing
	{
		itemSize[]={2,2};
	};
	class FOG_Combat_HikingBoots_Base: Clothing
	{
		itemSize[]={2,2};
	};
	class FOG_G3_Hoodie_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_Crye_G3_Shirt_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_Enhanced_PCU_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_HeavyRiders_Jacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_Hoodie_Jacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_Shirt_ISOF_Jacket_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_Tactical_Fleece_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_UFJ_Shirt_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_Jacket_SoftShell_ColorBase: Clothing
	{
		itemSize[]={3,3};
	};
	class FOG_Hooded_Parka_ColorBase: Clothing
	{
		itemSize[]={3,3};
		itemsCargoSize[]={8,6};
	};
	class FOG_BDU_Pants_Black: BDUPants
	{
		itemSize[]={2,3};
	};
	class FOG_FieldShorts_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class FOG_FieldPants_ColorBase: Clothing
	{
		itemSize[]={2,3};
	};
	class FOG_Pants_Crye_G3_ColorBase: Clothing
	{
		itemSize[]={2,3};
		itemsCargoSize[]={6,6};
	};
	class FOG_Gorka_Pants_ColorBase: Clothing
	{
		itemSize[]={2,3};
		itemsCargoSize[]={6,6};
	};
	class FOG_UFP_Pants_ColorBase: Clothing
	{
		itemSize[]={2,3};
		itemsCargoSize[]={7,6};
	};
	class FOG_G99_Pants_ColorBase: Clothing
	{
		itemSize[]={2,3};
		itemsCargoSize[]={8,6};
	};
	class FOG_MTF_Pants_ColorBase: Clothing
	{
		itemSize[]={2,3};
		itemsCargoSize[]={6,6};
	};
	class FOG_Pouch_Admin_Spiritus_Base: Inventory_Base
	{
		itemsCargoSize[]={6,2};
	};
	class FOG_TV110T_AdminPouchBase: Container_Base
	{
		itemsCargoSize[]={6,3};
	};
	class FOG_TV110T_UtilityPouchBase: Container_Base
	{
		itemsCargoSize[]={6,2};
	};
	class FOG_Pouch_Tall_Spiritus_Base: Inventory_Base
	{
		itemsCargoSize[]={4,3};
	};
	class FOG_FC_Panel_Flag_Base: Container_Base
	{
		itemsCargoSize[]={6,2};
	};
	class FOG_Pouch_Belly_Spiritus_Base: Container_Base
	{
		itemsCargoSize[]={6,2};
	};
	class Blowtorch: Inventory_Base
	{
		itemSize[]={2,3};
	};
	class GardenLime: Inventory_Base
	{
		itemSize[]={2,3};
	};
	class Fabric: Inventory_Base
	{
		itemSize[]={3,2};
	};
};
