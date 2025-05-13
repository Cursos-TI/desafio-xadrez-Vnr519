#include <stdio.h>

/*
 * Programa: Simulação de movimentos das peças de xadrez
 * Peças: Torre, Bispo e Rainha
 * Estruturas de repetição usadas: for, while, do-while
 * Curso: Análise e Desenvolvimento de Sistemas
 * Autor: Vinicius Rodrigues
 */

int main() {
    // ----------------------------
    // Movimento da TORRE com FOR
    // ----------------------------
    int casasTorre = 5; // Número de casas que a Torre irá se mover
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------------------
    // Movimento do BISPO com WHILE
    // ----------------------------
    int casasBispo = 5; // Número de casas que o Bispo irá se mover
    int iBispo = 1;

    printf("Movimento do Bispo (5 casas na Diagonal: Cima Direita):\n");

    while (iBispo <= casasBispo) {
        printf("Cima Direita\n");
        iBispo++;
    }

    printf("\n");

    // ----------------------------
    // Movimento da RAINHA com DO-WHILE
    // ----------------------------
    int casasRainha = 8; // Número de casas que a Rainha irá se mover
    int iRainha = 1;

    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    do {
        printf("Esquerda\n");
        iRainha++;
    } while (iRainha <= casasRainha);

    // Final do programa
    return 0;
}
