#include <stdio.h>

#include "arrayListCadastro.c"

enum{
    OP_NAO_SELECIONADA = 0,
    OP_ADICIONAR,
    OP_EXCLUIR,
    OP_ALTERAR,
    OP_IMPRIMIR,
    OP_IMPRIMIR_TODOS,
    OP_ORDENAR,
    OP_SAIR,
};



#define MAX_ITEMS 10
#define MAX_SUBITEMS 5

int main() {
    int matriz[MAX_ITEMS][MAX_SUBITEMS];

    // Exemplo de inicialização da matriz
    for (int i = 0; i < MAX_ITEMS; i++) {
        for (int j = 0; j < MAX_SUBITEMS; j++) {
            matriz[i][j] = i * 10 + j; // Exemplo de valor a ser armazenado na matriz
        }
    }

    // Exemplo de acesso aos elementos da matriz
    for (int i = 0; i < MAX_ITEMS; i++) {
        printf("Item principal %d:\n", i);
        for (int j = 0; j < MAX_SUBITEMS; j++) {
            printf("Subitem %d: %d\n", j, matriz[i][j]);
        }
        printf("\n");
    }
    /*
    EXEMPLO DE COMO FAZER PRA CHAMAR ADD
    int novoCadastro[5][100]; // Array para armazenar os dados do novo cadastro

    printf("Digite o endereco: ");
    fgets(novoCadastro[1], sizeof(novoCadastro[1]), stdin);
    novoCadastro[1][strlen(novoCadastro[1]) - 1] = '\0'; esse é melhor 

    // Preencher o array com os dados do novo cadastro
    printf("Digite o CPF: ");
    scanf("%s", &novoCadastro[0]);
    printf("Digite o endereco: ");
    scanf("%s", novoCadastro[1]); // Assumindo que endereco seja uma string
    printf("Digite o telefone: ");
    scanf("%s", novoCadastro[2]); // Assumindo que telefone seja uma string
    printf("Digite o email: ");
    scanf("%s", novoCadastro[3]); // Assumindo que email seja uma string
    printf("Digite o nome: ");
    scanf("%s", novoCadastro[4]); // Assumindo que nome seja uma string

    // Chamar a função add para adicionar o novo cadastro à lista
    add(novoCadastro);
    */
    return 0;
}
int menu(){
    
}