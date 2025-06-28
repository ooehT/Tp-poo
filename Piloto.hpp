
#ifndef PILOTO_H
#define PILOTO_H
#include <iostream>  // Para entrada e saída padrão
#include <vector>    // Para usar vetores
#include <string>    // Para usar strings
#include <iomanip>
#include "Pessoa.hpp"
using namespace std;
class Piloto : public Pessoa {
    private:

    int matricula;
    string breve;
    int horasVoo;

    public:
    Piloto();
    Piloto(int matricula, string breve, int horasVoo, string nome);
    int getMatricula(){return matricula;};
    string getBreve() {return breve;};
    int getVoo() {return horasVoo;};
    void setMatricula(int a);
    void setBreve(string a);
    void setVoo(int a);
    void adciona(vector <Piloto>& cadastros);
    ~Piloto();
};
#endif  