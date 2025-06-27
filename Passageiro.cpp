#include <iostream>  // Para entrada e saída padrão
#include <vector>    // Para usar vetores
#include <string>    // Para usar strings
#include <iomanip>
using namespace std;
#include "Passageiros.hpp"

Passageiro::Passageiro() {
    nome = "";  // Nome vazio por padrão
    CPF = "";  // Inicializa as vitórias com 0
    numeroBilhete = 0;  // Inicianliza as derrotas com 0
}
void adciona(vector <Passageiro>& cadastros){
    Passageiro pessoaNova;
    string nomeA;
    string CPFA;
    int bilheteA;
    cout <<"Insira o nome: ";
    cin.ignore();
    getline(cin, nomeA);
    pessoaNova.setNome(nomeA);
    cout <<"Digite o CPF: ";
    cin.ignore();
    getline(cin, CPFA);
    pessoaNova.setCPF(CPFA);
    cout << "Insira o bilhete: ";
    getline(cin, bilheteA);
    pessoaNova.setBilhete(bilheteA);
}
