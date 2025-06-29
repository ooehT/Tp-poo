#include <iostream>  
#include <vector>    
#include <string>    
#include <iomanip>
#include "Aeronave.hpp"
using namespace std;

Aeronave::Aeronave(string c, string m, int cap, double vel, double aut){
    c = "";
    m = "";
    cap = 0;
    vel = 0.0;
    aut = 0.0;
}
void adicionarAeronave(vector <Aeronave>& cadastros){
    Aeronave aeronaveN;
    string codigoA;
    string modeloA;
    int capacidadeA;
    double velocidadeA;
    double autonomiaA;
    
    cout <<"Insira o codigo da aeronave: \n";
    cin.ignore();
    getline(cin, codigoA);
    aeronaveN.setCodigo(codigoA);

    cout <<"Digite o modelo da aeronave: \n";
    cin.ignore();
    getline(cin, modeloA);
    aeronaveN.setModelo(modeloA);

    cout << "Insira o capacidade da aeronave: \n";
    cin.ignore();
    cin >> capacidadeA;
    aeronaveN.setCapacidade(capacidadeA);

    cout << "Insira o velocidade media da aeronave: \n";
    cin.ignore();
    cin >> velocidadeA;
    aeronaveN.setVelocidadeMedia(velocidadeA);

    cout << "Insira o autonomia da aeronave: \n";
    cin.ignore();
    cin >> autonomiaA;
    aeronaveN.setAutonomia(autonomiaA);

    cadastros.push_back(aeronaveN);
    cout << "Passageiro cadastrado com sucesso!! \n";
}

string Aeronave::getCodigo() const { return codigo; }
string Aeronave::getModelo() const { return modelo; }
int Aeronave::getCapacidade() const { return capacidade; }
double Aeronave::getVelocidadeMedia() const { return velocidadeMedia; }
double Aeronave::getAutonomia() const { return autonomia; }

