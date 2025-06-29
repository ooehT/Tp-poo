#include "Voos.hpp"
#include <iostream>
Voos::Voos(const std::string &cod, const std::string &org, const std::string &dest, double dist,
         Aeronave *a, Piloto *com, Piloto *prim, const std::string &hora)
    : codigo(cod), origem(org), destino(dest), distancia(dist),
      aeronave(a), comandante(com), primeiroOficial(prim), horaSaida(hora)
{
    escalas = static_cast<int>(dist / a->getAutonomia());
}

void Voos::adicionarPassageiro(Passageiro *p)
{
    if (passageiros.size() < aeronave->getCapacidade())
        passageiros.push_back(p);
}

void Voos::listarPassageiros() const
{
    for (const auto &p : passageiros)
        std::cout << p->getNome() << std::endl;
}

void Voos::detalhesVoo() const
{
    std::cout << "Voo " << codigo << " de " << origem << " para " << destino << " com "
              << passageiros.size() << " passageiros." << std::endl;
}
