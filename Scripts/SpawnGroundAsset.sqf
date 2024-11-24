params ["_location", "_Object"];

_Object addAction["Remove Vehicle", {
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; 
    deleteVehicle _vehicle;
}, _location];

_Object addAction ["Warthog Transport",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5];   
    _vehicle = createVehicle ["OPTRE_M813_TT", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];

_Object addAction ["Warthog MG",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_M12_LRV", _pos,[],0,"CAN_COLLIDE"];   
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];

_Object addAction ["Warthog Gauss",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5];   
    _vehicle = createVehicle ["OPTRE_M12G1_LRV", _pos,[],0,"CAN_COLLIDE"];
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];

_Object addAction ["Warthog AA",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5];   
    _vehicle = createVehicle ["OPTRE_M12R_AA", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];

_Object addAction ["Oryx",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5];   
    _vehicle = createVehicle ["OPTRE_M494", _pos,[],0,"CAN_COLLIDE"];
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];

_Object addAction ["Scorpion",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_M808B_UNSC", _pos,[],0,"CAN_COLLIDE"]; 
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];

_Object addAction ["Scorpion Howitzer",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5];   
    _vehicle = createVehicle ["OPTRE_M875_SPH", _pos,[],0,"CAN_COLLIDE"];    
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];


_Object addAction ["Grizzly",{
    params ["_object", "_caller", "_ID", "_location"];
    _vehicle = nearestObjects [_location, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
    sleep 0.2;
    _pos = [(getPosATL _location) # 0, (getPosATL _location) # 1, (getPosATL _location) #2 + 0.5]; 
    _vehicle = createVehicle ["OPTRE_M850_UNSC", _pos,[],0,"CAN_COLLIDE"];   
    { _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
    _vehicle setDir (getDir _location);
}, _location];