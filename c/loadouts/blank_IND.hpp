// Author: You
// Description: paste your loadout config from the arseanal exporter
#include "\x\cmf\addons\framework\loadouts\undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE

// Camo set
#define CAMO_UNIFORM "milgp_u_fleece_rgr_g3_field_pants_mc"
#define CAMO_VEST "milgp_v_jpc_Grenadier_belt_mc", "milgp_v_jpc_assaulter_belt_mc", "milgp_v_jpc_hgunner_belt_mc", "milgp_v_jpc_marksman_belt_mc", "milgp_v_jpc_medic_belt_mc", "milgp_v_jpc_teamleader_belt_mc", "milgp_v_marciras_marksman_belt_mc", "milgp_v_marciras_hgunner_belt_mc", "milgp_v_marciras_grenadier_belt_mc", "milgp_v_marciras_medic_belt_mc"
#define CAMO_BACKPACK "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR "milgp_h_airframe_01_MC", "milgp_h_airframe_01_goggles_MC", "milgp_h_airframe_02_MC", "milgp_h_airframe_02_goggles_MC", "milgp_h_airframe_03_goggles_MC", "milgp_h_airframe_03_MC", "milgp_h_airframe_04_goggles_MC", "milgp_h_airframe_04_MC", "milgp_h_airframe_05_goggles_MC", "milgp_h_airframe_05_MC", "milgp_h_airframe_06_goggles_MC"
// Rifle
#define RIFLE "rhs_weap_mk18_KAC"
#define RIFLE_MAG "rhs_mag_30Rnd_556x45_M855A1_PMAG:10"
#define RIFLE_ATTACHMENTS "rhsusf_acc_nt4_black", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_g33_xps3", "rhsusf_acc_grip2"
#define AR_ATTACHMENTS RIFLE_ATTACHMENTS, 
#define ALT_OPTICS "rhsusf_acc_acog3","optic_Aco","CUP_optic_CompM2_Black","CUP_optic_TrijiconRx01_black","CUP_optic_MRad",STANAG_OPTICS,WARSAW_OPTICS
// GL Rifle
#define GLRIFLE "rhs_weap_mk18_m320"
#define GLRIFLE_MAG "rhs_mag_30Rnd_556x45_M855A1_PMAG:10"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:6","1Rnd_SmokeRed_Grenade_shell:4","1Rnd_SmokeOrange_Grenade_shell:4",GLRIFLE_MAG_FLARE
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:4"
// Carbine
#define CARBINE "rhs_weap_mk18_KAC"
#define CARBINE_MAG "rhs_mag_30Rnd_556x45_M855A1_PMAG:10"
// AR
#define AR "CUP_lmg_Mk48_tan"
#define AR_MAG "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M:5"
// AT
#define AT "rhs_weap_M136_hedp"
#define AT_MAG 
// MMG
#define MMG ""
#define MMG_MAG 
#define MMG_ATT ""
// MAT
#define MAT "rhs_weap_maaws"
#define MAT_MAG "rhs_mag_maaws_HEDP:3"
#define MAT_MAG2 
#define MAT_OPTIC "rhs_optic_maaws"
// Facewear
#define GOG "milgp_f_face_shield_tactical_shemagh_MC", "milgp_f_face_shield_tactical_MC", "milgp_f_face_shield_shades_MC", "milgp_f_face_shield_goggles_shemagh_MC", "milgp_f_face_shield_goggles_MC", "milgp_f_face_shield_MC", "rhsusf_shemagh_tan", "rhsusf_shemagh_gogg_grn", "rhsusf_shemagh2_od", "UK3CB_G_Tactical_Black_Shemagh_Green_Gloves_Green", "UK3CB_G_Tactical_Black_Shemagh_White_Gloves_Black", "UK3CB_G_Tactical_Black_Shemagh_Green_Gloves_Tan", "UK3CB_G_Tactical_Clear_Shemagh_White_Gloves_Tan"

// -------------------- PASTE ABOVE THIS LINE
//HMG
#define HMG 
#define HMG_TRI_HI 
#define HMG_TRI_LO 
#define HMG_MAG 
//HAT
#define HAT 
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG 
// SAM
#define SAM "CUP_launch_FIM92Stinger"
#define SAM_MAG 
#define SAM_MAG2 
// Sniper Rifle
#define SNIPER "srifle_DMR_06_olive_F"
#define SNIPER_MAG "20Rnd_762x51_Mag:10"
#define SNIPER_ATTACHMENTS "optic_LRPS"
// Spotter Rifle
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "optic_mrco","bipod_01_f_blk"
// SMG
#define SMG CARBINE
#define SMG_MAG CARBINE_MAG
// Pistol
#define PISTOL "CUP_hgun_Colt1911"
#define PISTOL_MAG "CUP_7Rnd_45ACP_1911:3"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED
#define CARRYALL "B_Carryall_mcamo"
#define GOG

// Specialized Resupply Vehicle Loadouts
// Ammo Truck
class I_E_Truck_02_Ammo_F {
	TransportWeapons[] = {AT,AT,AT};
	TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,CARBINE_MAG,GLRIFLE_MAG,GLRIFLE_MAG,AR_MAG,AR_MAG,AR_MAG,AR_MAG,MMG_MAG,MMG_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE,MAT_MAG,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES};
	TransportItems[] = {TOOLKIT};
};

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,GLRIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,GLRIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,GLRIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

// ====================
// uniform[] = {};                 Uniform/clothes
// vest[] = {};                    Vest/Plate Carrier/Harness/Chest rig
// headgear[] = {};                Helmets, Hats
// backpack[] = {};                Backpack
// goggles[] = {};                 Facewear
// weapons[] = {};                 Primary weapons (Rifles, MGs, DMRs etc)
// handguns[] = {};                Pistols, machine-pistols etc
// launchers[] = {};               AT/AA launchers
// magazines[] = {};               Magazines. Includes grenades, and can include specific explosives such as mines and demo blocks.
// items[] = {};                   Misc items, eg. Explosive detonators, wire cutters etc
// backpackItems[] = {};           Items sent to backpack. Can include weapons, magazines and probably a lot of other things.
// linkedItems[] = {};             Items that go in the linked slots: NVGs, Map, Compass, Watch, Binoculars, Rangefinders, GPS/UAV terminal
// attachments[] = {};             Primary weapon attachments.
// secondaryAttachments[] = {};    Launcher attachments
// handgunAttachments[] = {};      Sidearm attachments
// opticChoices[] = {};            List of optics that can be chosen by this class during safestart. Automatically included by arsenal exporter, so scroll back up and add some for the love of god.
// ====================

// Base Classes
class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS,RADIO_SR};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
//  goggles[] = {GOG};
  face[] = {F_P};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};


//Leadership
class ftl: rifleman {// FTL
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS,RADIO_MR};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_LR};
};
class plt: sl {// Platoon Leader
};
class coy: plt {// CO and PL
};
class xo: coy {// XO
};
class sgt: plt {// Platoon Sergeant
};
class uav: rifleman { //UAV
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};


//Medics
class sm: Fic_Soldier_Carbine {// Medic
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
  items[] += {RADIO_MR,RADIO_LR};
};
class plm: sm {// Platoon Medic
};
class cm: plm {// Company Medic
};


//Infantry
class ar: rifleman {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class rifleman_02: rifleman {// Grenadier
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES};
};


//Weapons Teams
class Fic_Spotter: rifleman { //Base Spotter
  linkedItems[] += {RANGE_FINDER};
};

//MMG
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class mmgg: ar {// MMG Gunner
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpackItems[] += {MMG_MAG};
};

//MAT
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};

//HMG
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {// HMG Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};

//HAT
class hatl: sl {// HAT Lead
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};

//SAM
class msaml: sl {// SAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG2};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG2)
};

//Mortar
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};

//Artillery
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};

//Sniper Team
class spotter: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};


// Air
class pilot {// Pilot
  uniform[] = {"U_B_HeliPilotCoveralls"};
  backpack[] = {"B_assaultpack_sgg"};
  vest[] = {"V_TacVest_blk"};
  headgear[] = {"H_PilotHelmetHeli_B"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class helicrew: pilot {// Aircrew
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  backpackItems[] += {RADIO_MR};
};


//Armor
class vicc: Fic_Soldier_Carbine {// Crew
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicl: vicc {// Vehicle Commander
};


//Support Teams
class Fic_eng: Fic_Soldier_Carbine { // Base ENG
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_ENG,BASE_MEDICAL};
  backpackItems[] = {};
};

//Demo
class demol: Fic_eng {// Demolitions Leader
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};

class eng: fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout
