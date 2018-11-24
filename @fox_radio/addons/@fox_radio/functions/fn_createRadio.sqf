/*
	Author: Skullfox

	Description:
	Create a vehicle radio

	Parameter(s):
  0 - Vehicle

	Returns:
	radio - object
*/

_vehicle = param[0,objNull];
_radio = createVehicle ["Land_PortableLongRangeRadio_F", position _vehicle, [], 0, "CAN_COLLIDE"];
[_radio,_vehicle] remoteExec ["disableCollisionWith", 0];
[_radio,true] remoteExec ["hideObject", 0];
_pos = (boundingBoxReal _vehicle)select 1 select 1;
_radio attachTo [_vehicle, [0, _pos - 1, 0.5] ];
_vehicle setVariable["fox_radio_obj",_radio,TRUE];

_radio
