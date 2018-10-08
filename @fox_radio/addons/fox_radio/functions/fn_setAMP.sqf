_veh = vehicle player;

[_veh] call fox_radio_fnc_deleteRadio;

_display = (findDisplay 6000);

if(_veh getVariable["fox_radio_AMP",TRUE] )then{

  _veh setVariable ["fox_radio_AMP", FALSE,TRUE];
  player say2d "fox_radio_button";
  (_display displayCtrl 77651) ctrlSetText "AMP: OFF";

}else{

  _veh setVariable ["fox_radio_AMP", TRUE,TRUE];
  player say2d "fox_radio_button";
  (_display displayCtrl 77651) ctrlSetText "AMP: ON";

};
