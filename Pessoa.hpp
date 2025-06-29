// Pessoa.h
#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>  // Para entrada e saída padrão
#include <vector>    // Para usar vetores
#include <string>    // Para usar strings
#include <iomanip>
#include <string>
using namespace std;
class Pessoa {

protected:
    string nome;

public:
    Pessoa(string nome);
    ~Pessoa() ;
    string setNome(string a);
    string getNome() const;
};


#endif

