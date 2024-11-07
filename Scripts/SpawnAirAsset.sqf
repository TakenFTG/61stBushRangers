params ["_location", "_Object"];

_Object addAction["Remove Vehicle", {
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; 
    deleteVehicle _vehicle;
}, _location];

_Object addAction ["Pelican",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_Pelican_armed", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];

_Object addAction ["Hornet",{ 
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_UNSC_hornet_CAP", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location); 
}, _location]; 

_Object addAction ["Falcon",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_UNSC_falcon_armed_S", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location); 
}, _location]; 

_Object addAction ["Sparrowhawk",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_AV22B_Sparrowhawk", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location); 
}, _location]; 

_Object addAction ["Bayonet",{
    params ["_object", "_caller", "_ID", "_location"]; 
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_bayonet_01", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location); 
}, _location];

_Object addAction ["A-84 Gladius",{
    params ["_object", "_caller", "_ID", "_location"]; 
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_gladius_01", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location); 
}, _location];