/*
execVM "AceSetRadios.sqf";
*/

_action = ["RadioPresets", "Radio Presets","",{},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToObject;
_action = ["1-1", "1-1 Presets","",{},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets"], _action] call ace_interact_menu_fnc_addActionToObject;
_action = ["1-2", "1-2 Presets","",{},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-1ARadios", "Set 1-1A Radio","",{
    [(call TFAR_fnc_activeSwRadio), 1, "111.1"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "111"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-1A Radio Settings Have Been Set";
},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets", "1-1"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-1BRadios", "Set 1-1B Radio","",{
    [(call TFAR_fnc_activeSwRadio), 1, "111.2"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "111"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-1B Radio Settings Have Been Set";
},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets", "1-1"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-1LRadios", "Set 1-1L Radio","",{
    [(call TFAR_fnc_activeSwRadio), 1, "111"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "110"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-1L Radio Settings Have Been Set";
},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets", "1-1"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-2ARadios", "Set 1-2A Radio","",{
    [(call TFAR_fnc_activeSwRadio), 1, "112.1"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "112"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-2A Radio Settings Have Been Set";
},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets", "1-2"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-2BRadios", "Set 1-2B Radio","",{
    [(call TFAR_fnc_activeSwRadio), 1, "112.2"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "112"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-2B Radio Settings Have Been Set";
},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets", "1-2"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-2LRadios", "Set 1-2L Radio","",{
    [(call TFAR_fnc_activeSwRadio), 1, "112"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "110"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-2L Radio Settings Have Been Set";
},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets", "1-2"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["CommandRadios", "Set Platoon Radio","",{
    [(call TFAR_fnc_activeSwRadio), 1, "110.1"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "110"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "Platoon Radio Settings Have Been Set";
},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["CommandRadios", "Set Command Radio","",{
    [(call TFAR_fnc_activeSwRadio), 1, "100.1"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "110"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "Command Radio Settings Have Been Set";
},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment", "RadioPresets"], _action] call ace_interact_menu_fnc_addActionToObject;