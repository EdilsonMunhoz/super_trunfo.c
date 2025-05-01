#include <stdio.h>

int main(){

    //Estado: B
    //Código: B02
    //Nome da Cidade: Rio de Janeiro
    //População: 6748000
    //Área: 1200.25 km
    //PIB: 30050 Bilhões de reais
    //Número de pontos turísticos: 30

    char estado;
    char carta[20];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

printf("Nome do Estado: ");
scanf("%c", &estado);
printf("O estado é: %c\n", estado);

printf("Digite seu codigo: ");
scanf("%s", &carta);
printf("O codigo é: %s\n", carta);

printf("Digite sua cidade: ");
scanf("%s", &cidade);
printf("A cidade é: %s\n", cidade);

printf("Digite sua populacao: ");
scanf("%d", &populacao);
printf("A populacao é: %d\n", populacao);

printf("Digite sua area: ");
scanf("%f", &area);
printf("Area por KM: %2.f\n", area);

printf("Digite seu pib: ");
scanf("%f", &pib);
printf("O pib é: %2.f\n", pib);

printf("Digite pontos turisticos: ");
scanf("%d", &pontosturisticos);
printf("Pontos turisticos são: %d\n", pontosturisticos);











}