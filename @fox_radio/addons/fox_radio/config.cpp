#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
	};
};


class CfgFunctions
{
	class ADDON
	{
		class COMPONENT
		{
			file="\fox_radio\functions";
			class createRadio{};
			class deleteRadio{};
			class open{};
			class playMusic{};
			class selectMusic{};
			class vehicle{};
			class setAMP{};
			class setMode{};
		};
	};
};

class Extended_Init_Eventhandlers
{
    class Car
    {
        fox_radio ="(_this select 0) call fox_radio_fnc_vehicle";
    };
		class Helicopter
		{
				fox_radio ="(_this select 0) call fox_radio_fnc_vehicle";
		};
};

class CfgSounds{
	sounds[] = {fox_radio_button};

	class fox_radio_button{
		name = "fox_radio_button";
		sound[] = {"\fox_radio\sounds\button.ogg", 1, 1};
		titles[] = {};
	};

};

#include "interface.hpp"
