#include<iostream>


//------------------- Math constants ---------------------
#define Pi  3.1415926

// ------------------ Atomic mass ------------------------
#define M_neutron   1.008664                    // u
#define m_electron  9.10938291e-31              // [kg]


// ------------------  Physical constants -----------------
#define k_boltz  1.38064852e-19              // kg/K (cm/s)^2
#define N_avo  6.0221409e+23               // atom/mol
#define speed_light  299792458                   // m/s

// ------------------  Converter  -------------------------
#define u_to_kg  1e-3 / N_avo
#define eV_to_J  1.60217662e-19
#define J_to_eV  1 / eV_to_J
#define keV_to_J  1.60217662e-16
#define J_to_keV  1 / keV_to_J
#define Ang_to_m  1e-10
#define perbcm_to_perm3  1e24 * 1e6



// ------------------  Ion specifics ----------------------
#define ke  8.987551e9                     // Coulomb constant:1/4/pi/electric_constant [N*m^2/C^2]
#define e_charge  1.60217662e-19                 // Electron Charge [C]
#define a0  0.529e-10                      // Bohr Radius [m]

// Misc.
#define dir_parallel_limit = 1e-10
#define small_kick = 1e-15