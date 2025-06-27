// Aeronave.cpp
#include "Aeronave.hpp"

Aeronave::Aeronave(std::string c, std::string m, int cap, double vel, double aut)
    : codigo(c), modelo(m), capacidade(cap), velocidadeMedia(vel), autonomia(aut) {}

std::string Aeronave::getCodigo() const { return codigo; }
std::string Aeronave::getModelo() const { return modelo; }
int Aeronave::getCapacidade() const { return capacidade; }
double Aeronave::getVelocidadeMedia() const { return velocidadeMedia; }
double Aeronave::getAutonomia() const { return autonomia; }

