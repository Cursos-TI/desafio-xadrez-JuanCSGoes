#include <stdio.h>

int main() {
    int i;

    //~~~~~~~~~~~~~~~~ MOVIMENTO DA TORRE (FOR) ~~~~~~~~~~~~~~~~//
    // A torre anda em linha reta. Vamos simular 5 casas para a direita.
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    //~~~~~~~~~~~~~~~~ MOVIMENTO DO BISPO (WHILE) ~~~~~~~~~~~~~~~~//
    // O bispo se move na diagonal. Vamos simular 5 casas para cima e à direita.
    printf("\nMovimento do Bispo (5 casas na Diagonal: Cima Direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    //~~~~~~~~~~~~~~~~ MOVIMENTO DA RAINHA (DO-WHILE) ~~~~~~~~~~~~~~~~//
    // A rainha pode se mover em qualquer direção. Vamos simular 8 casas para a esquerda.
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}