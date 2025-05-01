#include <stdio.h>

int main(){

    //Estado: B
    //Código: B02
    //Nome da Cidade: Rio de Janeiro
    //Área: 1200.25 km
    //PIB: 30050 Bilhões de reais
    //Número de pontos turísticos: 30
    //Densidade populacional: 5.62 hab/km
    //PIB per Capita: 445317.12

    char estado;
    char carta[20];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibpercapita;

printf("Nome do Estado: ");
scanf(" %c", &estado);
printf("O estado é: %c\n", estado);

printf("Digite seu codigo: ");
scanf("%s", carta);
printf("O codigo é: %s\n", carta);

printf("Digite sua cidade: ");
scanf("%s", &cidade);
printf("A cidade é: %s\n", cidade);

printf("Digite sua populacao: ");
scanf("%d", &populacao);
printf("A populacao é: %d\n", populacao);

printf("Digite sua area: ");
scanf("%f", &area);
printf("Area por KM: %f\n", area);

printf("Digite seu pib: ");
scanf("%f", &pib);
printf("O pib por bilhões é: %f\n", pib);

printf("Digite pontos turisticos: ");
scanf("%d", &pontosturisticos);
printf("Pontos turisticos são: %d\n", pontosturisticos);

//CalculodaDensidade
densidade = populacao / area;
printf("A densidade populacional é: %.2f\n", densidade);

//CalculoPIBperCapita
pib = 300.50 * 1000000000;
pibpercapita  = pib / populacao;
printf("O PIB per capita é: %.2f\n", pibpercapita);









}