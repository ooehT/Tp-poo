#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H
#include <iostream>  // Para entrada e saída padrão
#include <vector>    // Para usar vetores
#include <string>    // Para usar strings
#include <iomanip>
using namespace std;
#include "Pessoa.hpp"

class Passageiro {
    private:
    string nome;
    string CPF;
    int numeroBilhete;

    public:
    Passageiro();
    Passageiro(string nome, string CPF, int numeroBilhete);
    string getNome(){return nome;};
    string getCPF() {return CPF;};
    int getBilhete() {return numeroBilhete;};
    void setNome(string a);
    void setCPF(string a);
    void setBilhete(int a);
    void adciona(vector <Passageiro>& cadastros);
    ~Passageiro();
};
#endif  

