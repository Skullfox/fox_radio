disableSerialization;





[]spawn{

  _modePublic = vehicle player getVariable ["fox_radio_ModePublic",TRUE];
  _AMP = vehicle player getVariable["fox_radio_AMP",TRUE];

  _display = (findDisplay 6000);

  if(_modePublic)then{
    (_display displayCtrl 77653) ctrlSetText "Public";
  }else{
    (_display displayCtrl 77653) ctrlSetText "Private";
  };


  if(_AMP)then{
    (_display displayCtrl 77651) ctrlSetText "AMP: ON";
  }else{
    (_display displayCtrl 77651) ctrlSetText "AMP: OFF";
  };


  _soundtracks = getArray(configfile >> "CfgFoxMusic" >> "addonList");

	{

        _file = getText(configfile >> "CfgSounds" >> _x >> "name");

				_i = lbAdd [77661, format["%1",_file]];
        lbSetData [77661, _i , format["%1",_x] ];

	} forEach _soundtracks;
}
