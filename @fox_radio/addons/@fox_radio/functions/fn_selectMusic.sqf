_selectedMusic =  lbData [77661, lbCurSel 77661];

_vehicle = param[0,vehicle player];

[_vehicle] call fox_radio_fnc_deleteRadio;
[_vehicle,_selectedMusic] call fox_radio_fnc_playMusic;
