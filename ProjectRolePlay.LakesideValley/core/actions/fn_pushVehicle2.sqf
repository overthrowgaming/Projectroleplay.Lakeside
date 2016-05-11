/*
	File: push the vehicle brahs

*/

_vehicle = cursortarget;
if(typeOf _vehicle == "A3L_HospitalBed") exitWith {hint "What are you trying to do? Stop trying to exploit!"};
_vehicle allowdamage false;
_vel = velocity _vehicle;
_dir = direction player;
_speed = 10;
_vehicle setVelocity [   (_vel select 0) + (sin _dir * _speed),    (_vel select 1) + (cos _dir * _speed),    (_vel select 2)  ];
sleep 1;
_vehicle allowdamage true;