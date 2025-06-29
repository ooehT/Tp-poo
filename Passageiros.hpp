#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H
#include <iostream>  // Para entrada e saída padrão
#include <vector>    // Para usar vetores
#include <string>    // Para usar strings
#include <iomanip>
using namespace std;
#include "Pessoa.hpp"

class Passageiro : public Pessoa{
    private:
    string CPF;
    int numeroBilhete;

    public:
    Passageiro();
    Passageiro(string nome, string CPF, int numeroBilhete);
    string getCPF() {return CPF;};
    int getBilhete() {return numeroBilhete;};
    void setCPF(string a);
    void setBilhete(int a);
    void adiciona(vector <Passageiro>& cadastros);
    ~Passageiro();
};
#endif  

