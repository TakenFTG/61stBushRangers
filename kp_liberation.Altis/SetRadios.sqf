/*
this execVM "SetRadios.sqf";
*/

call{_this addAction["Set 1-1A Radios", {
    [(call TFAR_fnc_activeSwRadio), 1, "111.1"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "111"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-1A Radio Settings Have Been Set";
}]};

call{_this addAction["Set 1-1B Radios", {
    [(call TFAR_fnc_activeSwRadio), 1, "111.2"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "111"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;


    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-1B Radio Settings Have Been Set";
}]};

call{_this addAction["Set 1-1L Radios", {
    [(call TFAR_fnc_activeSwRadio), 1, "111"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "110"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;


    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-1 Leadership Radio Settings Have Been Set";
}]};

call{_this addAction["Set 1-2A Radios", {
    [(call TFAR_fnc_activeSwRadio), 1, "112.1"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "112"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-2A Radio Settings Have Been Set";
}]};

call{_this addAction["Set 1-2B Radios", {
    [(call TFAR_fnc_activeSwRadio), 1, "112.2"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "112"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-2B Radio Settings Have Been Set";
}]};

call{_this addAction["Set 1-2L Radios", {
    [(call TFAR_fnc_activeSwRadio), 1, "112"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "110"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "1-2L Radio Settings Have Been Set";
}]};

call{_this addAction["Set Command Radios", {
    [(call TFAR_fnc_activeSwRadio), 1, "100.1"] call TFAR_fnc_SetChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "110"] call TFAR_fnc_SetChannelFrequency;
    
    _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;
    _settings set [5, 1];
    [call TFAR_fnc_activeSwRadio, _settings] call TFAR_fnc_setSwSettings;

    [(call TFAR_fnc_activeSWRadio), 2] call TFAR_fnc_setAdditionalSwStereo;
    [call TFAR_fnc_activeSWRadio, 1] call TFAR_fnc_setSwStereo;
    Hint "Command Radio Settings Have Been Set";
}]};
