// Aeronave.h
#ifndef AERONAVE_H
#define AERONAVE_H
#include <iostream>  
#include <vector>   
#include <string>    
#include <iomanip>
#include <string>
using namespace std;
class Aeronave {
private:
    string codigo;
    string modelo;
    int capacidade;
    double velocidadeMedia; 
    double autonomia;      

public:
    Aeronave();
    Aeronave(string c, string m, int cap, double vel, double aut);
    string getCodigo() const;
    string getModelo() const;
    int getCapacidade() const;
    double getVelocidadeMedia() const;
    double getAutonomia() const;
    void adicionarAeronave(vector <Aeronave>& cadastros);
    void setCodigo(string cod) {
        if (cod.empty()) {
            throw invalid_argument("Codigo nao pode ser vazio.");
        }
        codigo = cod;
    }

    void setModelo(string mod) {
        if (mod.empty()) {
            throw invalid_argument("Modelo nao pode ser vazio.");
        }
        modelo = mod;
    }

    void setCapacidade(int cap) {
        if (cap <= 0) {
            throw invalid_argument("Capacidade deve ser positiva.");
        }
        capacidade = cap;
    }

    void setVelocidadeMedia(double vel) {
        if (vel <= 0) {
            throw invalid_argument("Velocidade media deve ser positiva.");
        }
        velocidadeMedia = vel;
    }

    void setAutonomia(double aut) {
        if (aut <= 0) {
            throw invalid_argument("Autonomia deve ser positiva.");
        }
        autonomia = aut;
    }
    void exibirInfo() const {
        cout << "Aeronave: " << codigo << ", Modelo: " << modelo << ", Capacidade: " << capacidade << endl;
    }
    ~Aeronave();
};

#endif

