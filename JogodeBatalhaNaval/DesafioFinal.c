#include <stdio.h>
#include <stdlib.h>

#define TAM_HABILIDADE 5

// Cria uma matriz em forma de cone (ponta no topo, alargando para baixo)
void criarCone(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (j >= TAM_HABILIDADE/2 - i && j <= TAM_HABILIDADE/2 + i && i <= TAM_HABILIDADE/2) {
                habilidade[i][j] = 3;
            } else {
                habilidade[i][j] = 0;
            }
        }
    }
}

// Cria uma matriz em forma de cruz
void criarCruz(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    int centro = TAM_HABILIDADE / 2;
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (i == centro || j == centro) {
                habilidade[i][j] = 3;
            } else {
                habilidade[i][j] = 0;
            }
        }
    }
}

// Cria uma matriz em forma de octaedro (losango)
void criarOctaedro(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    int centro = TAM_HABILIDADE / 2;
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                habilidade[i][j] = 3;
            } else {
                habilidade[i][j] = 0;
            }
        }
    }
}

// Função para imprimir qualquer matriz de habilidade
void imprimirMatriz(int matriz[TAM_HABILIDADE][TAM_HABILIDADE], const char* nome) {
    printf("\n%s:\n", nome);
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int cone[TAM_HABILIDADE][TAM_HABILIDADE];
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];

    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    imprimirMatriz(cone, "Habilidade Cone");
    imprimirMatriz(cruz, "Habilidade Cruz");
    imprimirMatriz(octaedro, "Habilidade Octaedro");

    return 0;
}