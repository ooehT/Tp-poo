#include <iostream>
#include <vector>
#include <cstdlib>
#include "Aeronave.hpp"
#include <algorithm> 

using namespace std;

// Construtor da classe Aeronave
Aeronave::Aeronave(int codigoM, int capacidadeM, double veloMediaM, double autoDistM){
    codigo = codigoM;
    capacidade = capacidadeM;
    veloMedia = veloMediaM;
    autoDist = autoDistM;
}