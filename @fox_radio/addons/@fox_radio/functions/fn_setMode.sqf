_veh = vehicle player;

_display = (findDisplay 6000);


if(_veh getVariable["fox_radio_ModePublic",TRUE] )then{

  _veh setVariable ["fox_radio_ModePublic", FALSE,TRUE];
  player say2d "fox_radio_button";
  (_display displayCtrl 77653) ctrlSetText "Private";

}else{

  _veh setVariable ["fox_radio_ModePublic", TRUE,TRUE];
  player say2d "fox_radio_button";
  (_display displayCtrl 77653) ctrlSetText "Public";

};
