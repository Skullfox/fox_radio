_vehicle = param[0,objNull];
_music = param[1,""];



_amp = _vehicle getVariable["fox_radio_AMP",TRUE];
_musicDefault = _music;
if(_amp)then{

    if(cameraView == "INTERNAL") then{
      _music = format["%1_2x",_music];
    } else{
      _music = format["%1",_music];
    };

}else{
    _music = format["%1",_music];
};

hint format["Playing now %1",_music];

_radio = [_vehicle] call fox_radio_fnc_createRadio;

{
  systemChat "play inside";
  if( isPlayer _x)then{
    _clientID = owner _x;
    [_radio,_music] remoteExec ["say3D", _clientID];
  };

} forEach crew _vehicle;

_allPlayersExceptCrew = allPlayers - crew _vehicle;
{
  systemChat"play outside";
  if( isPlayer _x)then{
    _clientID = owner _x;
    [_radio,_musicDefault] remoteExec ["say3D", _clientID];
  };
} forEach _allPlayersExceptCrew;
