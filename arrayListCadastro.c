#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arrayListCadastro.h"

// variaveis

int maxSize = 7;
int position = 0;

// função

void add(int value[5])
{

    /*
    ordem
    0 - CPF
    1 - Nome
    2 - Endereço
    3 - Telefone
    4 - Email
    */
    if (position == maxSize)
    {
        printf("Acabou o espaço, precisa fazer a func de almentar");
    } // ainda tem espaço;
    // add os dados
    strcpy(list[position].cpf, value[0]); // tem que ser assim pq meus dados são string
    strcpy(list[position].nome, value[1]);
    strcpy(list[position].endereco, value[2]);
    strcpy(list[position].telefone, value[3]);
    strcpy(list[position].email, value[4]);
    position++;
}

void delet(char cpf[100])
{
    int index;

    if (position == 0){
        //não tem cadastro!
        return;
    }
    
    if (findCPF(cpf,index))
    {
        //apagar
    }
}

void modify()
{
}

void toPrint()
{
}

void toPrintAll()
{
}

void orderBy()
{
}

bool findCPF(char cpf[100], int *index)
{
    for (size_t i = 0; i < position; i++)
    {
        if (strcmp(cpf, list[i].cpf) == 0)
        {
            //add um ponteiro que mude o valor mostre onde está o cpf
            *index = i;
            return true;
        }
    }
    return false;
}