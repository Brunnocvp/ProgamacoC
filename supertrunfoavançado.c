#include <stdio.h>

int main() {
    // --- VARIÁVEIS PARA CARTA 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapit1;

    // --- VARIÁVEIS PARA CARTA 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapit2;

    // ====================== CADASTRO DA CARTA 1 ==================
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // ====================== CADASTRO DA CARTA 2 ==================
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); 

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (Bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // ======================= CÁLCULOS INTERMEDIÁRIOS =====================
    // Cálculo das propriedades calculadas para ambas as cartas
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibPerCapit1 = (pib1 * 1000000000.0f) / populacao1;
    pibPerCapit2 = (pib2 * 1000000000.0f) / populacao2;

    // ==================== COMPARAÇÃO UTILIZANDO IF / IF-ELSE ====================
    // Conforme as regras do nível básico, escolhemos um único atributo fixo no código.
    // Atributo escolhido: População (Maior valor vence).

    printf("===================================================\n");
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    
    printf("Carta 1 - %s (%c): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n\n", nomeCidade2, estado2, populacao2);

    // Estrutura de decisão para determinar e exibir o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas as cidades possuem a mesma populacao.\n");
    }
    printf("===================================================\n");

    return 0;
}
