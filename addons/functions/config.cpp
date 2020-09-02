#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { QMAINPATCH };
        authors[] = { "Salbei" };
        VERSION_CONFIG;
    };
};

/* MovesBasic */
class CfgMovesBasic {
	class Default;
    /*
	class ManActions {
		RR_anim_coverFace_1 = "RR_anim_coverFace_1";
		RR_anim_cough_1 = "RR_anim_cough_1";
		RR_anim_cough_2 = "RR_anim_cough_3";
		RR_anim_cough_3 = "RR_anim_cough_3";
		RR_anim_cough_4 = "RR_anim_cough_4";
	};
	class Actions {
		class NoActions: ManActions {
			RR_anim_coverFace_1[] = {"RR_anim_coverFace_1","Gesture"};
			RR_anim_cough_1[] = {"RR_anim_cough_1","Gesture"};
			RR_anim_cough_2[] = {"RR_anim_cough_2","Gesture"};
			RR_anim_cough_3[] = {"RR_anim_cough_3","Gesture"};
			RR_anim_cough_4[] = {"RR_anim_cough_4","Gesture"};
		};
		class PistolStandActions: NoActions {
			RR_anim_coverFace_1[] = {"RR_anim_coverFace_1_pst","Gesture"};
			RR_anim_cough_1[] = {"RR_anim_cough_1_pst","Gesture"};
			RR_anim_cough_2[] = {"RR_anim_cough_2_pst","Gesture"};
		};
	};
    */
};

class CfgMovesMaleSdr: CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class StandBase;
	class States {
		class RR_anim_horrorTwitchPose_1: StandBase {
			//actions = "RifleStandActions";
			file = QPATHTOF(horrorTwitchPose_1.rtm);
			interpolationspeed = 200;
			looped = 1;
			speed = 0.6;
			static = 1;
			weaponLowered = 0;
		};
    };
};

