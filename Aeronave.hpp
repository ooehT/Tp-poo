// Aeronave.h
#ifndef AERONAVE_H
#define AERONAVE_H

#include <string>

class Aeronave {
private:
    std::string codigo;
    std::string modelo;
    int capacidade;
    double velocidadeMedia; // milhas por hora
    double autonomia;       // milhas

public:
    Aeronave(std::string c, std::string m, int cap, double vel, double aut);
    
    // Getters e Setters
    std::string getCodigo() const;
    std::string getModelo() const;
    int getCapacidade() const;
    double getVelocidadeMedia() const;
    double getAutonomia() const;
};

#endif

