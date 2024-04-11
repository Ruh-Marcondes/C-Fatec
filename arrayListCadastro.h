
#ifndef ARRAYLISTCADASTRO_ARRATLISTCADASTRO_H
#define ARRAYLISTCADASTRO_ARRATLISTCADASTRO_H


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>




typedef struct{ // é para permitir armazenar dados da
                // mesma entidade Cadastro na qual depois sera criado uma lista para quardar
                // essas informações tipo os subtopicos
    char nome[100];
    char endereco[100];
    char cpf[15]; // ###.###.###-##
    char telefone[100];
    char email[100]
} Cadastro;

extern int position;
extern int maxSize;
extern Cadastro *list; // Cria um ponteiro de list do tipo Cadastro..

//protótipos



void add();
void delet();
void modify();
void toPrint();
void toPrintAll();
void orderBy();
void expand();
bool findCPF(char cpf[100], int *index);


#endif //ARRAYLISTCADASTRO_ARRATLISTCADASTRO_H