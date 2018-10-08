/*
	Author: Skullfox

	Description:
	Deletes a vehicle radio

	Parameter(s):
  0 - Vehicle

	Returns:
	nothing
*/

_vehicle = param[0,objNull];
_radio = _vehicle getVariable["fox_radio_obj",objNull];
deleteVehicle _radio;
