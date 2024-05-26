
call{_this addAction["Remove Vehicle", {_vehicle = nearestObjects [HPOS1, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;}]};

call{_this addAction ["Pelican",{
_vehicle = nearestObjects [HPOS1, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
sleep 0.2;
_pos = [(getPosATL HPOS1) # 0, (getPosATL HPOS1) # 1, (getPosATL HPOS1) #2 + 0.5]; 
_vehicle = createVehicle ["OPTRE_Pelican_armed", _pos,[],0,"CAN_COLLIDE"]; 
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
_vehicle setDir (getDir HPOS1); 
}]}; 

call{_this addAction ["Hornet",{ 
_vehicle = nearestObjects [HPOS1, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
sleep 0.2;
_pos = [(getPosATL HPOS1) # 0, (getPosATL HPOS1) # 1, (getPosATL HPOS1) #2 + 0.5]; 
_vehicle = createVehicle ["OPTRE_UNSC_hornet_CAP", _pos,[],0,"CAN_COLLIDE"]; 
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
_vehicle setDir (getDir HPOS1); 
}]}; 

call{_this addAction ["Faclon",{ 
_vehicle = nearestObjects [HPOS1, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
sleep 0.2;
_pos = [(getPosATL HPOS1) # 0, (getPosATL HPOS1) # 1, (getPosATL HPOS1) #2 + 0.5]; 
_vehicle = createVehicle ["OPTRE_UNSC_falcon_armed_S", _pos,[],0,"CAN_COLLIDE"]; 
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
_vehicle setDir (getDir HPOS1); 
}]}; 

call{_this addAction ["Sparrowhawk",{ 
_vehicle = nearestObjects [HPOS1, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
sleep 0.2;
_pos = [(getPosATL HPOS1) # 0, (getPosATL HPOS1) # 1, (getPosATL HPOS1) #2 + 0.5]; 
_vehicle = createVehicle ["OPTRE_AV22B_Sparrowhawk", _pos,[],0,"CAN_COLLIDE"]; 
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
_vehicle setDir (getDir HPOS1); 
}]}; 

call{_this addAction ["Bayonet",{ 
_vehicle = nearestObjects [HPOS1, ["Helicopter","Plane","Car","Tank"], 10] select 0; deleteVehicle _vehicle;
sleep 0.2;
_pos = [(getPosATL HPOS1) # 0, (getPosATL HPOS1) # 1, (getPosATL HPOS1) #2 + 0.5]; 
_vehicle = createVehicle ["OPTRE_bayonet_01", _pos,[],0,"CAN_COLLIDE"]; 
{ _x addCuratorEditableObjects [[_vehicle], true] } forEach allCurators; 
_vehicle setDir (getDir HPOS1); 
}]};