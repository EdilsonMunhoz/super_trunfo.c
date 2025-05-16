#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n"); 
        moverTorre(casas - 1); // chamada recursiva
        
    } 

} 

int main() {
    
    printf("*** Desafio final Xadrez *** \n");

    // Movimento da Torre com recursividade 
    moverTorre(5);
    printf("\n");
    // Movimento do Bispo com loops aninhados
    int x = 1, y = 1; // posição inicial do bispo
    printf("Movimento do Bispo:\n");

    for (int linha = 0; linha < 5; linha++) { // Loop externo: vertical (cima)
        for (int coluna = 0; coluna < 1; coluna++) { // Loop interno: horizontal (direita)
            x++; // direita
            y++; // cima
            printf("Diagonal direita cima\n");
        } 
    } printf("\n");

    printf("Movimento da Rainha:\n");
    int passos = 0;
    do {
        printf("Diagonal esquerda cima\n");
        passos++;
    } while (passos < 8);

    printf("\n");

    printf("Movimento do Cavalo: \n");
    int movimentoCompleto = 1;

    while (movimentoCompleto --)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n"); 
        }
            printf("Direita\n");
    }



    return 0;

}