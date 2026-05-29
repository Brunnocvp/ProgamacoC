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
    float superPoder1;

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
    float superPoder2;

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
    // Densidade populacional e PIB per Capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibPerCapit1 = (pib1 * 1000000000.0) / populacao1;
    pibPerCapit2 = (pib2 * 1000000000.0) / populacao2;

    // Cálculo do Super Poder
    // Multiplicamos o PIB por 1B para somar na mesma magnitude do PIB per Capita
    // O inverso da densidade é calculado como (1.0 / densidade)
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapit1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapit2 + (1.0f / densidade2);

    // ====================== EXIBIÇÃO DOS DADOS ==================
    printf("================ CARTA 1 ================\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("Populacao: %lu | Area: %.2f km² | PIB: %.2f Bilhoes\n", populacao1, area1, pib1);
    printf("Pontos Turisticos: %d | Densidade: %.2f hab/km² | PIB per Capita: R$ %.2f\n", pontosTuristicos1, densidade1, pibPerCapit1);
    printf("SUPER PODER: %.2f\n\n", superPoder1);

    printf("================ CARTA 2 ================\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("Populacao: %lu | Area: %.2f km² | PIB: %.2f Bilhoes\n", populacao2, area2, pib2);
    printf("Pontos Turisticos: %d | Densidade: %.2f hab/km² | PIB per Capita: R$ %.2f\n", pontosTuristicos2, densidade2, pibPerCapit2);
    printf("SUPER PODER: %.2f\n\n", superPoder2);

    // ==================== COMPARAÇÃO DE CARTAS ====================
    // Variáveis auxiliares para armazenar o resultado booleano (1 ou 0)
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea      = area1 > area2;
    int resultadoPib       = pib1 > pib2;
    int resultadoPontos    = pontosTuristicos1 > pontosTuristicos2;
    int resultadoDensidade = densidade1 < densidade2; // Menor densidade vence!
    int resultadoPibCapita = pibPerCapit1 > pibPerCapit2;
    int resultadoSuper     = superPoder1 > superPoder2;

    printf("Comparacao de Cartas:\n");
    
    printf("Populacao: %s (%d)\n",            resultadoPopulacao ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPopulacao);
    printf("Area: %s (%d)\n",                 resultadoArea      ? "Carta 1 venceu" : "Carta 2 venceu", resultadoArea);
    printf("PIB: %s (%d)\n",                  resultadoPib       ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPib);
    printf("Pontos Turisticos: %s (%d)\n",    resultadoPontos    ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPontos);
    printf("Densidade Populacional: %s (%d)\n", resultadoDensidade ? "Carta 1 venceu" : "Carta 2 venceu", resultadoDensidade);
    printf("PIB per Capita: %s (%d)\n",       resultadoPibCapita ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPibCapita);
    printf("Super Poder: %s (%d)\n",          resultadoSuper     ? "Carta 1 venceu" : "Carta 2 venceu", resultadoSuper);

    return 0;
}
