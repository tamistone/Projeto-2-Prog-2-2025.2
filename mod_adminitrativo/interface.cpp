#include "services.h"
#include <iostream>

using namespace std;

void janela_cadastro_aluno() {
    cout << "Painel de Cadastro de Aluno\n";
    typedef struct {
    int id = obter_proximo_id();
    int ativo = 0;
    char nome[100];
    char cpf[15];
    char senha[30];
    funcao_pessoa categoria;
} identidade;

}


void janela_admin() {
    int i = 0;
    int escolha = -1;
    while (escolha != 0) {
        cout << "Painel do Administrador\n";
        cout << "1 - Cadastrar Professor\n";
        cout << "2 - Cadastrar Aluno\n";
        cout << "3 - Cadastrar Vendedor\n";
        cout << "4 - Cadastrar Locador\n";
        cout << "0 - Sair do Painel Administrativo\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;  
        cin.ignore();
        switch (escolha)
        {
        case 2:
            /* código */
            break;
        
        default:
            break;
        }
    }
}