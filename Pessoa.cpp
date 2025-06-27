// Pessoa.cpp
#include "Pessoa.hpp"

Pessoa::Pessoa(std::string n) : nome(n) {}
std::string Pessoa::getNome() const { return nome; }

Piloto::Piloto(std::string nome, std::string matricula, std::string breve, int horas)
    : Pessoa(nome), matricula(matricula), breve(breve), horasVoo(horas) {}

std::string Piloto::getMatricula() const { return matricula; }
std::string Piloto::getBreve() const { return breve; }
int Piloto::getHorasVoo() const { return horasVoo; }

Passageiro::Passageiro(std::string nome, std::string cpf, std::string bilhete)
    : Pessoa(nome), cpf(cpf), bilhete(bilhete) {}

std::string Passageiro::getCPF() const { return cpf; }
std::string Passageiro::getBilhete() const { return bilhete; }

