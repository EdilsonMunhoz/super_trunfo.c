#include <stdio.h>

int main(){

//Estado: A
//Código A01
//Nome da Cidade: São Paulo
//População: 12325000
//Área: 1521.11km
//PIB: 699.28 Bilhões de reais
//Número de pontos turísticos: 50
//Densidade Populacional: 81.03hab/km
//PIB per capita: 56736.71 reais
//Superpoder: 1398572449792.00

    char estado;
    char carta[20];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibpercapita;
    float superpoder;

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

printf("Digite área da cidade: ");
scanf("%f", &area);
printf("Area por KM: %f\n", area);

printf("Digite seu pib: ");
scanf("%f", &pib);
printf("O pib em bilhões é: %f\n", pib);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontosturisticos);
printf("Pontos turisticos são: %d\n", pontosturisticos);

//CalculodaDensidade
densidade = populacao / area;
printf("A densidade populacional é: %.2f\n", densidade);

//CalculoPIBperCapita
pib = 699.28 * 1000000000;
pibpercapita  = pib / populacao;
printf("O PIB per capita é: %.2f\n", pibpercapita);

//CalculoSuperPoder
superpoder = (float)populacao + area + pib + (float)pontosturisticos + pib + pibpercapita + (1 / densidade);
printf("O super poder é: %.2f\n", superpoder);









}