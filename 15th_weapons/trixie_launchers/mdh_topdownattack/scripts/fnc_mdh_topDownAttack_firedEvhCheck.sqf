///////////////////////////////////////////////////////////////////////////////////////////////////
// TOP-DOWN ATTACK MODE ADDON FOR TITANLAUNCHER
// MADE BY MOERDERHOSCHI
// ARMED-ASSAULT.DE
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// FIRED EVENTHANDLER TO CHECK IF TITAN LAUNCHER WAS FIRED AND HANDLE THE MISSILE
///////////////////////////////////////////////////////////////////////////////////////////////////
fnc_mdh_topDownAttack_firedEvh = {

	if (isNull player) exitWith {false};
	if ( !(player getVariable ["mdh_topDownAttack_missileguidance_evh", false]) ) then
	{
		execVM "trixie_launchers\mdh_topDownAttack\scripts\mdh_topDownAttack_firedEvh.sqf";
	};
};
