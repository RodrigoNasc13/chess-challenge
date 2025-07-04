#include <stdio.h>

int main() {
    // Definindo o número de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int casas_cavalo = 3;
    
    printf("=== MOVIMENTACAO DAS PECAS DE XADREZ ===\n\n");
    
    // TORRE: Move 5 casas para a direita usando FOR
    printf("Torre movendo 5 casas para a direita:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // BISPO: Move 5 casas na diagonal (cima e direita) usando WHILE
    printf("Bispo movendo 5 casas na diagonal (cima e direita):\n");
    int contador_bispo = 1;
    while (contador_bispo <= casas_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        contador_bispo++;
    }
    printf("\n");
    
    // RAINHA: Move 8 casas para a esquerda usando DO-WHILE
    printf("Rainha movendo 8 casas para a esquerda:\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);
    printf("\n");

    // CAVALO: Move 2 casas na vertical (baixo) e 1 casa na horizontal (esquerda) usando FOR e WHILE

    printf("Cavalo movendo 2 casas na vertical (baixo) e 1 casa na horizontal (esquerda):\n");
    for(int i = 1; i <= casas_cavalo; i++) {
        while (i <3) {
            printf("Baixo\n");
            i++;
        }
        printf("Esquerda\n");
    }
    
    return 0;
}