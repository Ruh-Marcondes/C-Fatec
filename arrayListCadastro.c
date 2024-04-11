#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arrayListCadastro.h"

int maxSize = 7;
int position = 0;
Cadastro *list = NULL;

void add(char value[5][100])
{
    if (position == maxSize)
    {
        printf("\nAcabou o espaço, precisa fazer a func de almentar");
        return;
    }

    strcpy(list[position].cpf, value[0]);
    strcpy(list[position].nome, value[1]);
    strcpy(list[position].endereco, value[2]);
    strcpy(list[position].telefone, value[3]);
    strcpy(list[position].email, value[4]);
    position++;
}

void delet(char cpf[100])
{
    int index;
    if (!findCPF(cpf, &index))
    {
        printf("\nCPF não encontrado.");
        return;
    }

    // Implemente a lógica de exclusão aqui
}

void modify(char cpf[100], char dadosAlterados[5][100], int *index)
{
    if (!findCPF(cpf, index))
    {
        printf("\nCPF não encontrado.");
        return;
    }

    strcpy(list[*index].cpf, dadosAlterados[0]);
    strcpy(list[*index].nome, dadosAlterados[1]);
    strcpy(list[*index].endereco, dadosAlterados[2]);
    strcpy(list[*index].telefone, dadosAlterados[3]);
    strcpy(list[*index].email, dadosAlterados[4]);
}

void to_print(char cpf[100])
{
    int index;
    if (!findCPF(cpf, &index))
    {
        printf("\nCPF não encontrado.");
        return;
    }

    printf("\n\nRegistro do CPF: %s", list[index].cpf);
    printf("\nNome: %s", list[index].nome);
    printf("\nTelefone: %s", list[index].telefone);
    printf("\nEndereço: %s", list[index].endereco);
    printf("\nEmail: %s", list[index].email);
}

void to_print_all()
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
        printf("\nEndereço: %s", list[i].endereco);
        printf("\nEmail: %s", list[i].email);
    }
}

void orderBy()
{
    bool is_order = false;
    do
    {
        if (position == 0)
        {
            is_order = true;
            return;
        }

        is_order = true;
        for (int i = 0; i < position - 1; i++)
        {
            for (int j = 0; j < position - i - 1; j++)
            {
                if (strcmp(list[j].nome, list[j + 1].nome) > 0)
                {
                    Cadastro temp = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = temp;
                    is_order = false;
                }
            }
        }
    } while (!is_order);
}

bool findCPF(char cpf[100], int *index)
{
    for (int i = 0; i < position; i++)
    {
        if (strcmp(cpf, list[i].cpf) == 0)
        {
            *index = i;
            return true;
        }
    }

    printf("CPF não encontrado.");
    return false;
}
