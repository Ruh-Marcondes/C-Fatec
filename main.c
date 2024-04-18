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
    // variaveis locais
    int opcao = OP_NAO_SELECIONADA, index = 0;
    char cpf[100];
    init();

    while (opcao != OP_SAIR)
    {
        opcao = menu();
        switch (opcao)
        {
        case OP_ADICIONAR:
            printf("Digite o CPF: ");
            fgets(listaux[0].cpf, sizeof(listaux[0].cpf), stdin);

            printf("Digite o nome: ");
            fgets(listaux[0].nome, sizeof(listaux[0].nome), stdin);

            printf("Digite o endereco: ");
            fgets(listaux[0].endereco, sizeof(listaux[0].endereco), stdin);

            printf("Digite o telefone: ");
            fgets(listaux[0].telefone, sizeof(listaux[0].telefone), stdin);

            printf("Digite o email: ");
            fgets(listaux[0].email, sizeof(listaux[0].email), stdin);

            add(listaux);
            clear(listaux);
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
            printf("Digite o CPF da qual os dados deseja alterar: ");
            scanf("%s", cpf);
            getchar(); // Limpa o buffer de entrada

            int index;
            if (findCPF(cpf, &index))
            {
                printf("Digite o novo nome (deixe em branco para manter o valor atual): ");
                fgets(listaux[0].nome, sizeof(listaux[0].nome), stdin);
                listaux[0].nome[strcspn(listaux[0].nome, "\n")] = '\0';

                printf("Digite o novo endereco (deixe em branco para manter o valor atual): ");
                fgets(listaux[0].endereco, sizeof(listaux[0].endereco), stdin);
                listaux[0].endereco[strcspn(listaux[0].endereco, "\n")] = '\0';

                printf("Digite o novo telefone (deixe em branco para manter o valor atual): ");
                fgets(listaux[0].telefone, sizeof(listaux[0].telefone), stdin);
                listaux[0].telefone[strcspn(listaux[0].telefone, "\n")] = '\0';

                printf("Digite o novo email (deixe em branco para manter o valor atual): ");
                fgets(listaux[0].email, sizeof(listaux[0].email), stdin);
                listaux[0].email[strcspn(listaux[0].email, "\n")] = '\0';

                modify(listaux, index);
            }
            else
            {
                printf("CPF não encontrado!");
            }

            clear(listaux);
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
    printf("%d - Alterar\n", OP_ALTERAR);
    printf("%d - Print by CPF\n", OP_IMPRIMIR);
    printf("%d - Print\n", OP_IMPRIMIR_TODOS);
    printf("%d - Ordenar\n", OP_ORDENAR);
    printf("%d - Sair\n", OP_SAIR);
    printf("Digite sua opcao: ");
    scanf("%d", &op);
    scanf("%*c");

    return op;
}