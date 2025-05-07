#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    float populacao1, populacao2, area1, area2, densidade1, densidade2;

    srand(time(0));
    populacao1 = 12325000;
    populacao2 = 6748000;
    area1 = 1521.11;
    area2 = 1200.25;
    densidade1 = 8102.74;
    densidade2 = 5622.24;

    printf("Bem-Vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. Densidade\n");

    printf("Escolha a comparação: ");
    scanf("%c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
        printf("Você escolheu a opção população!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("Você escolheu a opcão área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolheu a opção densidade!\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    default:
        printf("Opção de jogo inválida!\n");
        break;
    }

    printf("Escolha o segundo atributo.\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. Recuo\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
            printf("Você escolheu a opção população!\n");
            resultado2 = populacao1 
             > populacao2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu a opção área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu a opção densidade!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção de jogo inválida!\n");
            break;
        }

        if (resultado1 && resultado2)
        {
            printf("Parabéns, vocÊ venceu!\n");
        } else if (resultado1 != resultado2){
            printf("Empatou!\n");
        } else {
            printf("Infelizmente, você perdeu!\n");
        }
        
        
    }
    
















}