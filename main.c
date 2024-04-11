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

// prototipo
int menu();

int main()
{
    //variaveis locais
    int opcao = OP_NAO_SELECIONADA;
    char cpf[100], nome[100], email[100], telefone[100], endereco[100];
    char alterarDados[5][100];


    init();
    while (opcao != OP_SAIR)
    {
        opcao = menu();
        switch (opcao)
        {
        case OP_ADICIONAR:
            printf("Digite o CPF: ");
            scanf("%s", cpf);
            getchar(); // Limpar o buffer

            printf("Digite o nome: ");
            scanf("%s", nome);
            getchar(); // Limpar o buffer

            printf("Digite o endereco: ");
            scanf("%s", endereco);
            getchar(); // Limpar o buffer

            printf("Digite o telefone: ");
            scanf("%s", telefone);
            getchar(); // Limpar o buffer

            printf("Digite o email: ");
            scanf("%s", email);
            getchar(); // Limpar o buffer

            add(cpf, nome, endereco, telefone, email);

            break;

        case OP_EXCLUIR:
            printf("Digite o CPF: ");
            scanf("%s", cpf);
            delet(cpf);
            break;

        case OP_IMPRIMIR:
            printf("Digite o CPF: ");
            scanf("%s", cpf);
            toPrint(cpf);
            break;
        case OP_IMPRIMIR_TODOS:
            toPrintAll();
            break;
            case OP_ORDENAR:
            orderBy();
            break;
        case OP_SAIR:
            break;
            case OP_ALTERAR:
            printf("Digite o CPF da qual os dados desenja alterar: ");
            
            scanf("%s", cpf);
            
          //  modify(cpf);
            break;
        default:
            printf("Opcao invalida!");
        }
    }

    return EXIT_SUCCESS;
}

int menu()
{
    int op = OP_NAO_SELECIONADA;

    printf("\nMENU\n");
    printf("%d - Add\n", OP_ADICIONAR);
    printf("%d - Delete\n", OP_EXCLUIR);
    printf("%d - Alterar\n",OP_ALTERAR);
    printf("%d - Print by CPF\n", OP_IMPRIMIR);
    printf("%d - Print\n", OP_IMPRIMIR_TODOS);
    printf("%d - Ordenar\n", OP_ORDENAR);
    printf("%d - Sair\n", OP_SAIR);
    printf("Digite sua opcao: ");
    scanf("%d", &op);
    scanf("%*c");

    return op;
}