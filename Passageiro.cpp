#include <iostream>  // Para entrada e saída padrão
#include <vector>    // Para usar vetores
#include <string>    // Para usar strings
#include <iomanip>
using namespace std;
#include "Passageiros.hpp"
#include "Pessoa.hpp"
Passageiro::Passageiro(string nome, string CPF, int numeroBilhete) : Pessoa(nome) {
    nome = "";  // Nome vazio por padrão
    CPF = "";  // Inicializa as vitórias com 0
    numeroBilhete = 0;  // Inicianliza as derrotas com 0
}
void adiciona(vector <Passageiro>& cadastros){
    Passageiro pessoaNova;
    string nomeA;
    string CPFA;
    int bilheteA;
    cout <<"Insira o nome: \n";
    cin.ignore();
    getline(cin, nomeA);
    pessoaNova.setNome(nomeA);
    cout <<"Digite o CPF: \n";
    cin.ignore();
    getline(cin, CPFA);
    pessoaNova.setCPF(CPFA);
    cout << "Insira o bilhete: \n";
    cin.ignore();
    cin >> bilheteA;
    pessoaNova.setBilhete(bilheteA);
    cadastros.push_back(pessoaNova);
    cout << "Passageiro cadastrado com sucesso!! \n";
}
