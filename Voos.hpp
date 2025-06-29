#include <iostream>  
#include <vector>   
#include <string>    
#include <iomanip>
#include <string>
#include "Aeronave.hpp"

using namespace std;

class Voos {
    private:
    int codigo;
    string origem;
    string destino;
    double distancia;
    int horarioDeSaida;
    Aeronave aeronaveDesignada;

    public:

    Voos();
    Voos(int cod, string org, string dest, double dist, int horarioSaida,  Aeronave& aeronave)
        : codigo(cod), 
          origem(org), 
          destino(dest), 
          distancia(dist),
          horarioDeSaida(horarioSaida), 
          aeronaveDesignada(aeronave)
          {

          }

    int getCodigo()  {
        return codigo;
    }

    string getOrigem()  {
        return origem;
    }

    string getDestino()  {
        return destino;
    }

    double getDistancia()  {
        return distancia;
    }

    int getHorarioDeSaida()  {
        return horarioDeSaida;
    }

     Aeronave& getAeronaveDesignada()  { // Retorna uma referência ante
        return aeronaveDesignada;
    }

    // --- Setters ---
    void setCodigo(int cod) {
        if (cod <= 0) {
            throw invalid_argument("Codigo do voo deve ser positivo.");
        }
        codigo = cod;
    }

    void setOrigem( string& org) {
        if (org.empty()) {
            throw invalid_argument("Origem nao pode ser vazia.");
        }
        origem = org;
    }

    void setDestino( string& dest) {
        if (dest.empty()) {
            throw invalid_argument("Destino nao pode ser vazio.");
        }
        destino = dest;
    }

    void setDistancia(double dist) {
        if (dist < 0) {
            throw invalid_argument("Distancia nao pode ser negativa.");
        }
        distancia = dist;
    }

    void setHorarioDeSaida(int horarioSaida) {
        // Validação básica para um int. Se fosse hora real, seria mais complexo.
        if (horarioSaida < 0) {
            throw invalid_argument("Horario de saida nao pode ser negativo.");
        }
        horarioDeSaida = horarioSaida;
    }

    void setAeronaveDesignada( Aeronave& aeronave) {
        aeronaveDesignada = aeronave; // Usa o operador de atribuição de Aeronave
    }

    // Método auxiliar para exibir detalhes
    void exibirDetalhes()  {
        cout << "\n--- Detalhes do Voo ---" << endl;
        cout << "Código: " << getCodigo() << endl;
        cout << "Origem: " << getOrigem() << endl;
        cout << "Destino: " << getDestino() << endl;
        cout << "Distância: " << getDistancia() << " km" << endl;
        cout << "Horário de Saída: " << setfill('0') << setw(4) << getHorarioDeSaida() << endl; // Ex: 1030 para 10:30
        cout << "  ";
        getAeronaveDesignada().exibirInfo(); 
};
    void adicionarVoo(vector <Voos>& cadastro);
    ~Voos();
};