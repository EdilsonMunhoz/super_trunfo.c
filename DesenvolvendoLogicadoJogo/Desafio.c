#include <stdio.h>

struct Carta {
    char nome[30];
    int populacao;
    float densidade;
};

int main() {

    struct Carta carta1 = {"São Paulo", 12325000, 81.03};
    struct Carta carta2 = {"Rio de Janeiro", 6748000, 5265.82};

    int opcao;

    printf("### Super Trunfo: Comparador de Cartas ###\n\n");
    printf("Carta 1:\n");
    printf("Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Densidade: %.2f hab/km²\n\n", carta1.densidade);

    printf("Carta 2:\n");
    printf("Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Densidade: %.2f hab/km²\n\n", carta2.densidade);

    // Menu de escolha
    printf("Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\n### Resultado da Comparação ###\n");

    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n", carta1.nome, carta1.populacao);
            printf("%s: %d\n", carta2.nome, carta2.populacao);

            if (carta1.populacao > carta2.populacao)
                printf("-> %s vence!\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("-> %s vence!\n", carta2.nome);
            else
                printf("-> Empate!\n");
            break;

        case 2:
            printf("Densidade:\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade);

            if (carta1.densidade > carta2.densidade)
                printf("-> %s vence!\n", carta1.nome);
            else if (carta2.densidade > carta1.densidade)
                printf("-> %s vence!\n", carta2.nome);
            else
                printf("-> Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}