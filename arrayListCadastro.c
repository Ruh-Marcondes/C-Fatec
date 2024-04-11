#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arrayListCadastro.h"

int maxSize = 7;
int position = 0;
Cadastro *list = NULL;

void add(char cpf[100],char nome[100],char endereco[100],char telefone[100],char email[100])
{
    if (position == maxSize)
    {
        printf("\nAcabou o espaco, precisa fazer a func de almentar");
        return;
    }

    strcpy(list[position].cpf, cpf);
    strcpy(list[position].nome, nome);
    strcpy(list[position].endereco, endereco);
    strcpy(list[position].telefone, telefone);
    strcpy(list[position].email, email);
    position++;
}

void delet(char cpf[100])
{
    int index;
    if (!findCPF(cpf, &index))
    {
        printf("\nCPF nao encontrado.");
        return;
    }else{
       for (int i = index; i < position - 1; i++) {
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

void modify(char cpf[100], char dadosAlterados[5][100], int *index)
{
    if (!findCPF(cpf, index))
    {
        printf("\nCPF nao encontrado.");
        return;
    }

    strcpy(list[*index].cpf, dadosAlterados[0]);
    strcpy(list[*index].nome, dadosAlterados[1]);
    strcpy(list[*index].endereco, dadosAlterados[2]);
    strcpy(list[*index].telefone, dadosAlterados[3]);
    strcpy(list[*index].email, dadosAlterados[4]);
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
                if (strcmp(list[j].nome, list[j+1].nome) > 0)
                {
                    // Troca os cadastros de posição
                    Cadastro temp = list[j];
                    list[j] = list[j+1];
                    list[j+1] = temp;
                    isOrder = false; // Sinaliza que houve troca e a lista ainda nao está completamente ordenada
                }
            }
        }
    } while (!isOrder);

    
    toPrintAll();//mostar que foi ordenado
    // Após a ordenação, todos os dados são rearranjados de acordo com a posição dos nomes
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

  
    return false;
}
void init()
{
    list = malloc(maxSize * sizeof(int));
    if(!list)
    {
        printf("Erro de alocacao de memoria!\n");
        exit(EXIT_FAILURE);
    }
}