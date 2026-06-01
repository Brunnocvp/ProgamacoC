#include <stdio.h>

int main() {
    // Definição das constantes para o número de casas que cada peça irá mover
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    printf("--- SIMULAÇÃO DE MOVIMENTOS NO XADREZ ---\n\n");

    // ==========================================
    // 1. Movimentação da Torre (Utilizando FOR)
    // Objetivo: 5 casas para a direita
    // ==========================================
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Quebra de linha para organizar a saída

    // ==========================================
    // 2. Movimentação do Bispo (Utilizando WHILE)
    // Objetivo: 5 casas na diagonal para cima e à direita
    // ==========================================
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < MOVIMENTO_BISPO) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ==========================================
    // 3. Movimentação da Rainha (Utilizando DO-WHILE)
    // Objetivo: 8 casas para a esquerda
    // ==========================================
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < MOVIMENTO_RAINHA);
    printf("\n");

    return 0;
}
