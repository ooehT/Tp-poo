#include <iostream>  // Para entrada e saída padrão
#include <vector>    // Para usar vetores
#include <string>    // Para usar strings
#include <iomanip>
#include "Piloto.hpp"
#include "Pessoa.hpp"
using namespace std;

Piloto::Piloto(int matricula, string breve, int horasVoo, string nome) : Pessoa(nome){
    matricula = 0;  // Nome vazio por padrão
    breve = "";  // Inicializa as vitórias com 0
    horasVoo = 0;  // Inicianliza as derrotas com 0
}
void adiciona(vector <Piloto>& cadastros){
    Piloto pessoaNova;
    string nomeA;
    string breveA;
    int matriculaA;
    int horasVooA;
    cout <<"Insira o nome: \n";
    cin.ignore();
    getline(cin, nomeA);
    pessoaNova.setNome(nomeA);
    cout <<"Insira a breve: \n";
    cin.ignore();
    getline(cin, breveA);
    pessoaNova.setBreve(breveA);
    cout << "Insira a matricula: \n";
    cin.ignore();
    cin >> matriculaA;
    pessoaNova.setMatricula(matriculaA);
    cadastros.push_back(pessoaNova);
    cout << "Passageiro cadastrado com sucesso!! \n";
}
