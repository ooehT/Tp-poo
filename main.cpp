#include <iostream>
#include <vector>
#include <cstdlib>
#include "Aeronave.hpp"
#include "Pessoa.hpp"
#include "Passageiros.hpp"
#include "Piloto.hpp"
#include "Voos.hpp"
#include <algorithm> 
#include <windows.h> 
int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int opcao;
    vector <Passageiro> pass;
    vector <Piloto> piloto;
    vector <Aeronave> aeronave;
    vector <Voos> voo;
    Passageiro pass1;
    Piloto piloto1;
    Aeronave aeronave1;
    Voos voo1;
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    
    cout << "============ S I S T E M A  D E  C O N T R O L E  D E  V O O S ============\n";
    cout << " 1. Cadastrar aeronave\n\n 2. Cadastrar piloto \n\n 3. Cadastrar passageiro \n\n 4. Criar voo \n\n 5. Embarcar passageiro de um voo \n\n 6. Listar voos \n\n 7. Listar passageiros de um voo \n\n 8. Gerar relatorios e estatisticas \n\n 9. Salvar dados e sair \n\n =====================================\n Escolha uma opcao: ";
    switch (opcao){
        case 1:
        aeronave1.adicionarAeronave(aeronave);
        break;
        case 2:
        piloto1.adiciona(piloto);
        break;
        case 3:
        pass1.adiciona(pass);
        break;
        case 4:
        
        

    }

}