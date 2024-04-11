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
   /**
    * int main() {
    char cpf[100];
    char dadosAlterados[5][100];
    int index;

    printf("Digite o CPF do cadastro a ser alterado: ");
    scanf("%s", cpf);

    if (findCPF(cpf, &index)) {
        printf("Digite os novos dados (ou pressione Enter para manter os atuais):\n");
        printf("Novo CPF: ");
        fgets(dadosAlterados[0], sizeof(dadosAlterados[0]), stdin);
        if (dadosAlterados[0][0] == '\n') {
            strcpy(dadosAlterados[0], list[index].cpf);
        } else {
            dadosAlterados[0][strlen(dadosAlterados[0]) - 1] = '\0'; // Remover a nova linha do final
        }

        printf("Novo nome: ");
        fgets(dadosAlterados[1], sizeof(dadosAlterados[1]), stdin);
        if (dadosAlterados[1][0] == '\n') {
            strcpy(dadosAlterados[1], list[index].nome);
        } else {
            dadosAlterados[1][strlen(dadosAlterados[1]) - 1] = '\0'; // Remover a nova linha do final
        }

        // Repita o mesmo padrão para os outros campos

        // Chamar a função modify para alterar os dados
        modify(cpf, dadosAlterados, &index);
    } else {
        printf("CPF não cadastrado.\n");
    }

    return 0;
}

    * 
   */
    return 0;
}
int menu(){
    
}