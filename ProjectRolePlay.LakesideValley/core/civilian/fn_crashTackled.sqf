/*
	File: fn_crashtackled.sqf


	Description:
	Starts and monitors the knocked out state.
*/

params [["_target", ObjNull,[ObjNull]], ["_who", "", [""]], "_obj"];

if(isNull _target) exitWith {};
if(_target != player) exitWith {};
if(_who isEqualTo "") exitWith {};

["You have been crash tackled.", false] spawn domsg;

player playMoveNow "Incapacitated";
_obj = "Land_ClutterCutter_small_F" createVehicle (getPosATL player);
_obj setPosATL (getPosATL player);
player attachTo [_obj,[0,0,0]];
[_obj] spawn {
	params ["_obj"];
	[3] call life_fnc_stage1pain;

	if(!(player getVariable["restrained",false]) && !(player getVariable["tied",false])) then {
		player playMoveNow "amovppnemstpsraswrfldnon";
	};

	detach player;
	deleteVehicle _obj;
	player setVariable["robbed",FALSE,TRUE];
};