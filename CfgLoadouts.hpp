class CfgLoadouts {
	// Use POTATO to run gear assignment
	usePotato = 1;

	// Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
	// Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
	allowMagnifiedOptics = 0;

	// Allow changeable optics on a global level, note: optic options obey allowMagnifiedOptics rules
	allowChangeableOptics = 1;

	// Do Vehicle Loadouts
	// 1 - Add supplies based on side gear script
	// 0 - Leave them to vanilla defaults
	// -1 - Clear all vehicle inventories
	setVehicleLoadouts = 1;

	// Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
	useFallback = 1;

	// prefixes to strip from the units classnames
	prefixes[] = {"potato_w_", "potato_e_", "potato_i_"};

	// Shared defines
	#include "c\loadouts\common.hpp" // DO NOT COMMENT OUT, WILL BREAK EVERYTHING

	// Note: please delete any factions you're not using
	// BLUFOR
	#include "c\loadouts\blu_gear.hpp"
	class potato_w 
	{
		//#include "c\loadouts\blank_BLU.hpp"
	};

	// INDFOR
	#include "c\loadouts\ind_gear.hpp"
	class potato_i 
	{
		#include "c\loadouts\blank_IND.hpp"
	};

	// OPFOR
	#include "c\loadouts\opf_gear.hpp"
	class potato_e 
	{
		//#include "c\loadouts\blank_OPF.hpp"
	};
};
