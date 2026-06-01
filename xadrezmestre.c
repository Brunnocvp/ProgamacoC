#include <stdio.h>

// Definição de constantes para o número de casas que cada peça vai mover
#define PASSOS_TORRE 5
#define PASSOS_BISPO 4
#define PASSOS_RAINHA 8

// ==========================================
// 1. FUNÇÕES RECURSIVAS (Torre, Bispo e Rainha)
// ==========================================

/**
 * Função Recursiva para o movimento da Torre.
 * Move-se estritamente para a Direita.
 */
void moverTorre(int passos) {
    // Caso base: se não houver mais passos, encerra a recursão
    if (passos <= 0) {
        return;
    }
    
    // Ação: imprime a direção do movimento atual
    printf("Direita\n");
    
    // Passo recursivo: chama a si mesma decrementando o contador de passos
    moverTorre(passos - 1);
}

/**
 * Função Recursiva para o movimento do Bispo.
 * Move-se na diagonal: Cima e Direita simultaneamente.
 */
void moverBispoRecursivo(int passos) {
    // Caso base: encerra quando os passos chegam a zero
    if (passos <= 0) {
        return;
    }
    
    // Ação: Na diagonal, a peça se move um passo para cima e um para a direita por casa
    printf("Cima, Direita\n");
    
    // Passo recursivo
    moverBispoRecursivo(passos - 1);
}

/**
 * Função Recursiva para o movimento da Rainha.
 * Move-se estritamente para a Esquerda neste exemplo.
 */
void moverRainha(int passos) {
    // Caso base
    if (passos <= 0) {
        return;
    }
    
    // Ação
    printf("Esquerda\n");
    
    // Passo recursivo
    moverRainha(passos - 1);
}

// ==========================================
// 2. FUNÇÃO PRINCIPAL (MAIN)
// ==========================================
int main() {
    
    // --- MOVIMENTO DA TORRE (Recursivo) ---
    printf("--- Movimento da Torre (%d casas) ---\n", PASSOS_TORRE);
    moverTorre(PASSOS_TORRE);
    printf("\n"); // Linha em branco para separar a saída das peças

    // --- MOVIMENTO DO BISPO (Loops Aninhados) ---
    // O requisito pede: "loop mais externo para o movimento vertical, e o mais interno para o horizontal"
    // Para simular a diagonal de 4 casas (4 para cima, 4 para a direita):
    printf("--- Movimento do Bispo (Loops Aninhados - %d casas) ---\n", PASSOS_BISPO);
    for (int i = 1; i <= PASSOS_BISPO; i++) {
        // Loop externo controla o eixo Vertical (Cima)
        printf("Cima\n");
        
        for (int j = 1; j <= 1; j++) {
            // Loop interno controla o eixo Horizontal (Direita)
            printf("Direita\n");
        }
    }
    printf("\n");

    // --- MOVIMENTO DO BISPO (Recursivo) ---
    printf("--- Movimento do Bispo (Recursivo - %d casas) ---\n", PASSOS_BISPO);
    moverBispoRecursivo(PASSOS_BISPO);
    printf("\n");

    // --- MOVIMENTO DA RAINHA (Recursivo) ---
    printf("--- Movimento da Rainha (%d casas) ---\n", PASSOS_RAINHA);
    moverRainha(PASSOS_RAINHA);
    printf("\n");

    // --- MOVIMENTO DO CAVALO (Loops Complexos) ---
    // O Cavalo deve mover-se em "L": 2 casas para Cima e 1 para a Direita.
    // Usaremos loops aninhados com múltiplas variáveis, controle de fluxo (continue/break) e condições.
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");
    
    // Loop externo simula o movimento vertical (eixo Y) e interno o horizontal (eixo X)
    // Inicializamos múltiplas variáveis no mesmo loop para fins avançados
    for (int vertical = 1, total_vertical = 2; vertical <= total_vertical; vertical++) {
        
        // Condição complexa: se passar do limite estipulado, quebra o loop (segurança)
        if (vertical > 2) {
            break; 
        }
        
        printf("Cima\n");
        
        // Loop interno para o movimento horizontal (1 casa para a direita)
        // Só deve rodar quando o movimento vertical terminar (chegar na 2ª casa)
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            if (vertical < 2) {
                // Se ainda não subiu as 2 casas, ignora o movimento para a direita usando continue
                continue; 
            }
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}
