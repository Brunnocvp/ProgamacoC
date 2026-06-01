#include <stdio.h>

int main() {
    // Definição das constantes das peças anteriores
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    // Constantes para o movimento do Cavalo
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

    printf("--- SIMULAÇÃO DE MOVIMENTOS NO XADREZ ---\n\n");

    // ==========================================
    // 1. Movimentação da Torre (FOR)
    // ==========================================
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ==========================================
    // 2. Movimentação do Bispo (WHILE)
    // ==========================================
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < MOVIMENTO_BISPO) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ==========================================
    // 3. Movimentação da Rainha (DO-WHILE)
    // ==========================================
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < MOVIMENTO_RAINHA);
    printf("\n");

    // ==========================================
    // 4. Movimentação do Cavalo (LOOPS ANINHADOS)
    // Objetivo: 2 casas para baixo, 1 para a esquerda
    // ==========================================
    printf("Movimento do Cavalo:\n");

    // Loop externo (FOR): Controla o deslocamento vertical (para baixo)
    for (int i = 1; i <= CAVALO_BAIXO; i++) {
        printf("Baixo\n");

        // Loop interno (WHILE): Executa a parte perpendicular do "L" (esquerda)
        // A condição (i == CAVALO_BAIXO) garante que ele só dobre à esquerda 
        // após terminar de descer as duas casas.
        if (i == CAVALO_BAIXO) {
            int j = 0;
            while (j < CAVALO_ESQUERDA) {
                printf("Esquerda\n");
                j++; // Incremento do loop interno
            }
        }
    }
    printf("\n");

    return 0;
}
