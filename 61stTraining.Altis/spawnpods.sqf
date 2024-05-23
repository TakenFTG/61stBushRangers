call{_this addAction["Remove Vehicle", {_box = nearestObjects [HPOS3, ["OPTRE_Ammo_SupplyPod_Empty"], 10] select 0; deleteVehicle _box;}]};

call{_this addAction["Spawn Automatic Rifle Pod",{
_box = nearestObjects [HPOS3, ["OPTRE_Ammo_SupplyPod_Empty"], 10] select 0; deleteVehicle _box;
sleep 0.2;
_pos = [(getPosATL HPOS3) # 0, (getPosATL HPOS3) # 1, (getPosATL HPOS3) #2 + 0.5];
_box = createVehicle["OPTRE_Ammo_SupplyPod_Empty", _pos,[],0,"CAN_COLLIDE"];
{_box addItemCargoGlobal _x} forEach [["Commando_20Rnd_65_Mag",50],["OPTRE_32Rnd_762x51_Mag",50],["OPTRE_60Rnd_5x23mm_Mag",50],["OPTRE_60Rnd_762x51_Mag",50]];
}]};

call{_this addAction["Spawn Semi Rifle Pod",{
_box = nearestObjects [HPOS3, ["OPTRE_Ammo_SupplyPod_Empty"], 10] select 0; deleteVehicle _box;
sleep 0.2;
_pos = [(getPosATL HPOS3) # 0, (getPosATL HPOS3) # 1, (getPosATL HPOS3) #2 + 0.5];
_box = createVehicle["OPTRE_Ammo_SupplyPod_Empty", _pos,[],0,"CAN_COLLIDE"];
{_box addItemCargoGlobal _x} forEach [["OPTRE_15Rnd_762x51_AP_Mag",50],["OPTRE_25Rnd_762x51_AP_Mag",50],["OPTRE_4Rnd_145x114_APFSDS_Mag",50]];
}]};

call{_this addAction["Spawn Box Ammo Pod",{
_box = nearestObjects [HPOS3, ["OPTRE_Ammo_SupplyPod_Empty"], 10] select 0; deleteVehicle _box;
sleep 0.2;
_pos = [(getPosATL HPOS3) # 0, (getPosATL HPOS3) # 1, (getPosATL HPOS3) #2 + 0.5];
_box = createVehicle["OPTRE_Ammo_SupplyPod_Empty", _pos,[],0,"CAN_COLLIDE"];
{_box addItemCargoGlobal _x} forEach [["OPTRE_100Rnd_95x40_Box",20],["OPTRE_200Rnd_127x99_M247H_Etilka_Ball",20],["OPTRE_100Rnd_95x40_Box",20],["OPTRE_100Rnd_762x51_Box",20],["OPTRE_100Rnd_95x40_Box",20]];
}]};

call{_this addAction["Spawn Breacher Pod",{
_box = nearestObjects [HPOS3, ["OPTRE_Ammo_SupplyPod_Empty"], 10] select 0; deleteVehicle _box;
sleep 0.2;
_pos = [(getPosATL HPOS3) # 0, (getPosATL HPOS3) # 1, (getPosATL HPOS3) #2 + 0.5];
_box = createVehicle["OPTRE_Ammo_SupplyPod_Empty", _pos,[],0,"CAN_COLLIDE"];
{_box addItemCargoGlobal _x} forEach [["OPTRE_M2_Smoke_Purple",16],["OPTRE_M2_Smoke_Red",20],["OPTRE_M2_Smoke",20],["OPTRE_M9_Frag",30],["AMP_Breaching_Charge_Mag",20],["C7_Remote_Mag",20],["OPTRE_M2_Smoke_Orange",20],["OPTRE_M2_Smoke_Purple",20],["OPTRE_12Rnd_8Gauge_Pellets",20],["OPTRE_12Rnd_8Gauge_Slugs",20],["3Rnd_Smoke_Grenade_shell",20],["3Rnd_HE_Grenade_shell",20],["AMP_Breaching_Charge_Mag",20]];
}]};

call{_this addAction["Spawn Spanker Pod",{
_box = nearestObjects [HPOS3, ["OPTRE_Ammo_SupplyPod_Empty"], 10] select 0; deleteVehicle _box;
sleep 0.2;
_pos = [(getPosATL HPOS3) # 0, (getPosATL HPOS3) # 1, (getPosATL HPOS3) #2 + 0.5];
_box = createVehicle["OPTRE_Ammo_SupplyPod_Empty", _pos,[],0,"CAN_COLLIDE"];
{_box addItemCargoGlobal _x} forEach [["OPTRE_M41_Twin_AI",10],["OPTRE_M41_Twin_HEAT_SACLOS",16],["OPTRE_M41_Twin_HEAP",20],["OPTRE_M41_Twin_Smoke_W",20]];
}]};

call{_this addAction["Spawn Medic Pod",{
_box = nearestObjects [HPOS3, ["OPTRE_Ammo_SupplyPod_Empty"], 10] select 0; deleteVehicle _box;
sleep 0.2;
_pos = [(getPosATL HPOS3) # 0, (getPosATL HPOS3) # 1, (getPosATL HPOS3) #2 + 0.5];
_box = createVehicle["OPTRE_Ammo_SupplyPod_Empty", _pos,[],0,"CAN_COLLIDE"];
{_box addItemCargoGlobal _x} forEach [["ACE_packingBandage",40],["ACE_elasticBandage",40],["ACE_fieldDressing",40],["ACE_epinephrine",20],["ACE_bloodIV_500",15],["ACE_bloodIV",15],["ACE_adenosine",20],["ACE_morphine",20],["ACE_tourniquet",10]];
}]};