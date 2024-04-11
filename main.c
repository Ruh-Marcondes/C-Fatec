#include <stdio.h>

#include "arrayListCadastro.c"

enum
{
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

int main()
{
    /*

    printf("Digite o endereco: ");
    fgets(novoCadastro[1], sizeof(novoCadastro[1]), stdin);
    novoCadastro[1][strlen(novoCadastro[1]) - 1] = '\0'; esse é melhor

   

         printf("Novo nome: ");
         fgets(dadosAlterados[1], sizeof(dadosAlterados[1]), stdin);
         if (dadosAlterados[1][0] == '\n') {
             strcpy(dadosAlterados[1], list[index].nome);
         } else {
             dadosAlterados[1][strlen(dadosAlterados[1]) - 1] = '\0'; // Remover a nova linha do final
         }
 //Verifica se precionado o <ENTER>
 #include <stdio.h>

 int main() {
     char ch;

     printf("Pressione Enter para continuar...");

     ch = getchar();

     if (ch == '\n') {
         printf("Enter pressionado. Continuando...\n");
     } else {
         printf("Outra tecla foi pressionada.\n");
     }

     return 0;
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
    char novoCadastro[5][100]; // Array para armazenar os dados do novo cadastro

    for (int i = 0; i < 3; i++)
    {
        // Preencher o array com os dados do novo cadastro
        printf("Digite o CPF: ");
        fgets(novoCadastro[0], sizeof(novoCadastro[0]), stdin);
        strtok(novoCadastro[0], "\n"); // Remover a nova linha do final

        printf("Digite o nome: ");
        fgets(novoCadastro[1], sizeof(novoCadastro[4]), stdin);
        strtok(novoCadastro[1], "\n"); // Remover a nova linha do final
        printf("Digite o endereco: ");
        fgets(novoCadastro[2], sizeof(novoCadastro[1]), stdin);
        strtok(novoCadastro[2], "\n"); // Remover a nova linha do final

        printf("Digite o telefone: ");
        fgets(novoCadastro[3], sizeof(novoCadastro[2]), stdin);
        strtok(novoCadastro[3], "\n"); // Remover a nova linha do final

        printf("Digite o email: ");
        fgets(novoCadastro[4], sizeof(novoCadastro[3]), stdin);
        strtok(novoCadastro[4], "\n"); // Remover a nova linha do final

        // Chamar a função add para adicionar o novo cadastro à lista
        add(novoCadastro);
    }

    orderBy();

    return 0;
}