#ifndef SERVICES_H
#define SERVICES_H

#include <stdio.h>



typedef struct {
    int id;
    int ativo = 0;
    char nome[100];
    char cpf[15];
    char senha[30];
} identidade;

// -------- serviços --------

void registrar_pessoa(
    identidade *pessoa
);

int obter_proximo_id()   ;

#endif
