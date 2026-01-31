#include "services.h"
#include <iostream>
#include <cstring>

using namespace std;

static funcao_pessoa ler_funcao() {
    int option;

    cout << "Categoria:\n";
    cout << "0 - Aluno\n";
    cout << "1 - Professor\n";
    cout << "2 - Admin\n";
    cout << "3 - Vendedor\n";
    cout << "4 - Locador\n";
    cout << "Escolha: ";
    cin >> option;
    cin.ignore();

    switch(option) {
        case 0: return FUNCAO_ALUNO;
        case 1: return FUNCAO_PROFESSOR;
        case 2: return FUNCAO_ADMIN;
        case 3: return FUNCAO_VENDEDOR;
        case 4: return FUNCAO_LOCADOR;
        default: return FUNCAO_ALUNO;
    }
}

int obter_proximo_id() {
    return 1;
}   

void registrar_pessoa(identidade *pessoa) {

}
