#include "services.h"
#include <iostream>
#include <cstring>

using namespace std;

static person_role read_role() {
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
        case 0: return ROLE_ALUNO;
        case 1: return ROLE_PROFESSOR;
        case 2: return ROLE_ADMIN;
        case 3: return ROLE_VENDEDOR;
        case 4: return ROLE_LOCADOR;
        default: return ROLE_ALUNO;
    }
}

int get_next_id() {
    return 1;
}   

void register_person(identidade *person) {

}
