/*
    ALAH SNACKBAR!
    Created By: TAW_Tonic
    Edited By: MidgetGrimm, PeterBeer, and Xetoxyc
    Tested and Approved by: 617th PMC

*/
private["_test"];
if(vest player != "A3L_SuicideVest") exitWith {};
[[0,format["Someone triggered a suicidevest and will detonate in 10 seconds"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
sleep 7;
[[0,format["Will blow up in 3 seconds"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
sleep 1;
[[0,format["Will blow up in 2 seconds"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
sleep 1;
[[0,format["Will blow up in 1 second!!!"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
sleep 1;
[[0,format["%1 went Alah Akbhar!!",name player]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;

removeVest player;
_test = "Sh_82mm_AMOS" createVehicle [0,0,9999];
_test setPos (getPos player);
_test setVelocity [100,0,0];

if(alive player) then {player setDamage 1;};