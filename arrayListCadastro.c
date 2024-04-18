#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "arrayListCadastro.h"

int maxSize = 7;
int position = 0;
Cadastro *list = NULL;
Cadastro *listaux = NULL;

void add(Cadastro *listaux)
{
    if (position == maxSize)
    {
        printf("\nAcabou o espaço, precisa fazer a função de aumentar");
        return;
    }

    strcpy(list[position].cpf, listaux[0].cpf);
    strcpy(list[position].nome, listaux[0].nome);
    strcpy(list[position].endereco, listaux[0].endereco);
    strcpy(list[position].telefone, listaux[0].telefone);
    strcpy(list[position].email, listaux[0].email);
    position++;
}


    void
    delet(char cpf[100])
{
    int index;
    if (!findCPF(cpf, &index))
    {
        printf("\nCPF nao encontrado.");
        return;
    }
    else
    {
        for (int i = index; i < position - 1; i++)
        {
            strcpy(list[i].cpf, list[i + 1].cpf);
            strcpy(list[i].nome, list[i + 1].nome);
            strcpy(list[i].endereco, list[i + 1].endereco);
            strcpy(list[i].telefone, list[i + 1].telefone);
            strcpy(list[i].email, list[i + 1].email);
        }

        printf("\nCadastro removido com sucesso.");
        position--;
    }

    // Implemente a lógica de exclusão aqui
}
void clear(Cadastro *list)
{
    free(list);
}

void modify(Cadastro *listaux, int index)
{
    if (strlen(listaux[0].nome) > 0 && listaux[0].nome[0] != '\n')
    {
        strcpy(list[index].nome, listaux[0].nome);
    }

    if (strlen(listaux[0].endereco) > 0 && listaux[0].endereco[0] != '\n')
    {
        strcpy(list[index].endereco, listaux[0].endereco);
    }

    if (strlen(listaux[0].telefone) > 0 && listaux[0].telefone[0] != '\n')
    {
        strcpy(list[index].telefone, listaux[0].telefone);
    }

    if (strlen(listaux[0].email) > 0 && listaux[0].email[0] != '\n')
    {
        strcpy(list[index].email, listaux[0].email);
    }
}

void toPrint(char cpf[100])
{
    int index;
    if (!findCPF(cpf, &index))
    {
        printf("\nCPF nao encontrado.");
        return;
    }
    printf("\n\nRegistro do CPF: %s", list[index].cpf);
    printf("\nNome: %s", list[index].nome);
    printf("\nTelefone: %s", list[index].telefone);
    printf("\nEndereco: %s", list[index].endereco);
    printf("\nEmail: %s", list[index].email);
}

void toPrintAll()
{
    if (position == 0)
    {
        printf("\nNenhum cadastro encontrado.");
        return;
    }

    for (int i = 0; i < position; i++)
    {
        printf("\n\nRegistro do CPF: %s", list[i].cpf);
        printf("\nNome: %s", list[i].nome);
        printf("\nTelefone: %s", list[i].telefone);
        printf("\nEndereco: %s", list[i].endereco);
        printf("\nEmail: %s", list[i].email);
    }
}

void orderBy()
{
    bool isOrder = false;
    do
    {
        if (position == 0)
        {
            isOrder = true;
            return;
        }
        isOrder = true; // Assume que a lista está ordenada até encontrar um par fora de ordem
        for (int i = 0; i < position - 1; i++)
        {
            for (int j = 0; j < position - i - 1; j++)
            {
                // Compara os nomes e troca se estiverem fora de ordem
                if (strcmp(list[j].nome, list[j + 1].nome) > 0)
                {
                    // Troca os cadastros de posição
                    Cadastro temp = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = temp;
                    isOrder = false; // Sinaliza que houve troca e a lista ainda nao está completamente ordenada
                }
            }
        }
    } while (!isOrder);

    toPrintAll(); // mostar que foi ordenado
    // Após a ordenação, todos os dados são rearranjados de acordo com a posição dos nomes
}

bool findCPF(char cpf[100], int *index)
{
    for (int i = 0; i < position; i++)
    {
        if (strcmp(cpf, list[i].cpf))
        {
            *index = i;
            return true;
        }
    }

    return false;
}


void init()
{
    list = malloc(maxSize * sizeof(Cadastro));
    if (!list)
    {
        printf("Erro de alocacao de memoria para 'list'!\n");
        exit(EXIT_FAILURE);
    }

    listaux = malloc(maxSize * sizeof(Cadastro));
    if (!listaux)
    {
        printf("Erro de alocacao de memoria para 'listaux'!\n");
        exit(EXIT_FAILURE);
    }
}
