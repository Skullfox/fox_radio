class RscText;
class RscEdit;
class RscPicture;
class RscListBox;
class RscButton;








class fox_radio
{
	idd = 6000;
	onLoad = "call fox_radio_fnc_open";
	onUnload = "";
	duration = 32000;
	fadeIn = 0;
	fadeOut = 0;
	enableSimulation = 1;
	class controls
	{
			class background : RscPicture
		{
			idc = 1623;
			x = "SafeZoneX + (460.30048 / 1920) * SafeZoneW";
			y = "SafeZoneY + (294.8346 / 1080) * SafeZoneH";
			w = "(1000 / 1920) * SafeZoneW";
			h = "(500 / 1080) * SafeZoneH";
			text = "\fox_radio\radio.paa";
		};

		class ListMusic : RscListBox
		{
			idc = 77661;
			text = "List Box";
			x = "SafeZoneX + (665.000000000001 / 1920) * SafeZoneW";
			y = "SafeZoneY + (379.67028 / 1080) * SafeZoneH";
			w = "(724.999999999999 / 1920) * SafeZoneW";
			h = "(350.000000000001 / 1080) * SafeZoneH";
			font = "RobotoCondensed";
			colorBackground[] = { 1, 1, 1, 0.3 };
			onLBSelChanged = "['onLBSelChanged',_this] call fox_artillery_fnc_handleAction;";
			onLBDblClick = "['onLBDblClick',_this] call fox_artillery_fnc_handleAction;";
		};


		class Stop : RscButton
		{
			idc = 77652;
			x = "SafeZoneX + (515.000000000001 / 1920) * SafeZoneW";
			y = "SafeZoneY + (530.8346 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(50 / 1080) * SafeZoneH";
			text = "Stop";
			action = "[vehicle player] call fox_radio_fnc_deleteRadio;";
		};
		class Play : RscButton
		{
			idc = 77650;
			text = "Play";
			x = "SafeZoneX + (515.000000000001 / 1920) * SafeZoneW";
			y = "SafeZoneY + (485 / 1080) * SafeZoneH";
			w = "(90 / 1920) * SafeZoneW";
			h = "(50 / 1080) * SafeZoneH";
			action = "[] call fox_radio_fnc_selectMusic;";
		};

		class AMP : RscButton
	{
		idc = 77651;
		text = "AMP";
		x = "SafeZoneX + (515.000000000001 / 1920) * SafeZoneW";
		y = "SafeZoneY + (365.000000000001 / 1080) * SafeZoneH";
		w = "(90 / 1920) * SafeZoneW";
		h = "(50 / 1080) * SafeZoneH";
		action = "[] call fox_radio_fnc_setAMP;";
		soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0,1};
		soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0,1};
		soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0,1};
		soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0,1};
	};
	class MODE: RscButton
	{
		idc = 77653;
		text = "Public";
		x = "SafeZoneX + (515.000000000001 / 1920) * SafeZoneW";
		y = "SafeZoneY + (410.000000000001 / 1080) * SafeZoneH";
		w = "(90 / 1920) * SafeZoneW";
		h = "(50 / 1080) * SafeZoneH";
		action = "[] call fox_radio_fnc_setMode;";
		soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0,1};
		soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0,1};
		soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0,1};
		soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0,1};
	};


	};
};
