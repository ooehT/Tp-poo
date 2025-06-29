#ifndef VOOS_HPP
#define VOOS_HPP
#include <string>
#include <vector>
#include "Aeronave.hpp"
#include "Piloto.hpp"
#include "Passageiros.hpp"
using namespace std;

class Voos
{
private:
    string codigo;
    string origem;
    string destino;
    double distancia;
    Aeronave *aeronave;
    Piloto *comandante;
    Piloto *primeiroOficial;
    vector<Passageiro *> passageiros;
    string horaSaida;
    int escalas;

public:
    Voos();
    Voos(const string &, const string &, const string &, double,
        Aeronave *, Piloto *, Piloto *, const string &);
    void adicionarPassageiro(Passageiro *p);
    void listarPassageiros() const;
    void detalhesVoo() const;
    void criaVoos();
    ~Voos();
};

#endif