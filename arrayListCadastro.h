#ifndef ARRAYLISTCADASTRO_ARRAYLISTCADASTRO_H
#define ARRAYLISTCADASTRO_ARRAYLISTCADASTRO_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Definição da estrutura Cadastro
typedef struct {
    char nome[100];
    char endereco[100];
    char cpf[15]; // ###.###.###-##
    char telefone[100];
    char email[100];
} Cadastro;


// Declaração das funções
extern int position;
extern int maxSize;
extern Cadastro *list;
extern Cadastro *listaux;

void add(Cadastro *listaux);
void delet(char cpf[100]);
void modify(Cadastro *listaux, int index);
void toPrint(char cpf[100]);
void toPrintAll();
void orderBy();
bool findCPF(char cpf[100], int *index);
void init();
void clear(Cadastro *list);

#endif // ARRAYLISTCADASTRO_ARRAYLISTCADASTRO_H
