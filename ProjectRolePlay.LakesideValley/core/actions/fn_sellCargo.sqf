/*
    File: fn_sellCargo.sqf
    Author: Matthias Bun

    Description:
    Sells and delets the cargo
*/
private["_cargo","_price"];


_cargo = nearestObjects[getPos player,["Land_CargoBox_V1_F"],8] select 0;
_price= 130000;

if(isNil "_cargo") then
{
	_cargo = nearestObjects[getPos player,["Land_MetalBarrel_F"],8] select 0;
	_price= 20000;//here you can edit the sell price
};

if(isNil "_cargo") exitWith {};

life_cash = life_cash + _price;
titleText["Du hast den container Verkauft","PLAIN"];
deleteVehicle _cargo;