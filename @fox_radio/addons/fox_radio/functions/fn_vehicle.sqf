_vehicle = _this;

_vehicle setVariable ["fox_radio_AMP", FALSE,TRUE];
_vehicle setVariable ["fox_radio_ModePublic", TRUE,TRUE];


_vehicle addaction["<t color='#FF0000'>>></t> Radio",{
  createDialog "fox_radio";
},{},2,false,false,"","_this in _target"];


_vehicle addMPEventHandler["MPKilled", {
	params ["_vehicle", "_killer", "_instigator", "_useEffects"];

  [_vehicle] call fox_radio_fnc_deleteRadio;

}];
