#include <stdio.h>

// Função recursiva para movimento da Torre
void mover_torre_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Direita\n");
    
    mover_torre_recursivo(casas_restantes - 1);
}

// Função recursiva para movimento do Bispo com loops aninhados
void mover_bispo_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    
    for (int vertical = 0; vertical < 1; vertical++) {
        printf("Cima\n");
        
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
    
    mover_bispo_recursivo(casas_restantes - 1);
}

// Função recursiva para movimento da Rainha
void mover_rainha_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Esquerda\n");
    
    mover_rainha_recursivo(casas_restantes - 1);
}

// Função recursiva para movimento do Cavalo em "L" com loops complexos
void mover_cavalo_recursivo(int movimentos_restantes) {
    if (movimentos_restantes <= 0) {
        return;
    }
    
    // Variáveis para controle do movimento em "L"
    int casas_verticais = 2;
    int casas_horizontais = 1;
    int movimento_atual = 1;  
    
    // Loop externo: controla as fases do movimento em "L" (vertical e horizontal)
    for (int fase = 1; fase <= 2; fase++) {
        
        // Fase 1: Movimento vertical (2 casas para cima)
        if (fase == 1) {
            for (int vertical = 1; vertical <= casas_verticais; vertical++) {
                if (vertical <= casas_verticais && movimento_atual == 1) {
                    printf("Cima\n");
                    
                    if (vertical == casas_verticais) {
                        break;
                    }
                } else {
                    continue;
                }
            }
        }
        
        // Fase 2: Movimento horizontal (1 casa para a direita)
        else if (fase == 2) {
            for (int horizontal = 1; horizontal <= casas_horizontais; horizontal++) {
                if (horizontal == 1 && movimento_atual == 1 && movimentos_restantes > 0) {
                    printf("Direita\n");
                    break;
                } else {
                    continue;
                }
            }
        }
    }
}

int main() {
    // Definindo o número de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int casas_cavalo = 3;
    
    printf("=== MOVIMENTACAO DAS PECAS DE XADREZ - NIVEL MESTRE ===\n\n");
    
    // TORRE: Movimento recursivo para 5 casas à direita
    printf("Torre movendo 5 casas para a direita (recursivo):\n");
    mover_torre_recursivo(casas_torre);
    printf("\n");
    
    // BISPO: Movimento recursivo com loops aninhados para 5 casas na diagonal
    printf("Bispo movendo 5 casas na diagonal (recursivo com loops aninhados):\n");
    mover_bispo_recursivo(casas_bispo);
    printf("\n");
    
    // RAINHA: Movimento recursivo para 8 casas à esquerda
    printf("Rainha movendo 8 casas para a esquerda (recursivo):\n");
    mover_rainha_recursivo(casas_rainha);
    printf("\n");
    
    // CAVALO: Movimento em "L" para 2 casas para cima e 1 para a direita
    printf("Cavalo movendo em 'L' (2 cima, 1 direita) com recursividade e loops complexos:\n");
    mover_cavalo_recursivo(casas_cavalo);

    return 0;
}