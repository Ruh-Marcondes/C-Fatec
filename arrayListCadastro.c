#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arrayListCadastro.h"

// variaveis

int maxSize = 7;
int position = 0;

// função

void add(char value[5][100])
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
        printf("\nAcabou o espaço, precisa fazer a func de almentar");
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

    if (position == 0)
    {
        printf("\nNenhum cadstro rncontrado");
        return;
    }

    if (findCPF(cpf, index))
    {
        // apagar
    }
}

void modify(char cpf[100])
{
    int index;
    if (position == 0)
    {
        printf("\nNenhum cadstro rncontrado");
        return;
    }
    if (findCPF(cpf, index))
    {
        // Achou o cpf
        list[index].nome;
    }
}

void toPrint(char cpf[100])
{
    int index;
    if (position == 0)
    {
        printf("\nNenhum cadstro encontrado");
        return;
    }
    if (findCPF(cpf, index))
    {
        // Achou o cpf
        printf("\n\nRegintro do CPF: %d", list[index].cpf);
        printf("\nNome: %d", list[index].nome);
        printf("\nTelefone: %d", list[index].telefone);
        printf("\nEndereco", list[index].endereco);
        printf("\nEmail %d", list[index].email);
    }
}

void toPrintAll()
{
    if (position == 0)
    {
        printf("\nNenhum cadstro encontrado");
        return;
    }
    for (int i = 0; i < position; i++)
    {
        printf("\n\nRegintro do CPF: %d", list[i].cpf);
        printf("\nNome: %d", list[i].nome);
        printf("\nTelefone: %d", list[i].telefone);
        printf("\nEndereco", list[i].endereco);
        printf("\nEmail %d", list[i].email);
    }
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
            // add um ponteiro que mude o valor mostre onde está o cpf
            *index = i;
            return true;
        }
    }
    printf("Esse cpf não está cadastrado");
    return false;
}