#include <stdio.h>

int main() {
    // --- VARIÁVEIS CARTA 1 ---
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "Sao Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 700.5; // Em bilhões
    int pontosTuristicos1 = 50;
    float densidade1 = 12300000 / 1521.11;

    // --- VARIÁVEIS CARTA 2 ---
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 355.2; // Em bilhões
    int pontosTuristicos2 = 75;
    float densidade2 = 6748000 / 1200.25;

    // Variável para a escolha do menu
    int opcao;

    // ====================== MENU INTERATIVO ======================
    printf("========== SUPER TRUNFO: INTERMEDIARIO ==========\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area (km²)\n");
    printf("3 - PIB (Bilhoes)\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (Menor vence!)\n");
    printf("-------------------------------------------------\n");
    printf("Digite sua opcao (1-5): ");
    scanf("%d", &opcao);
    printf("=================================================\n\n");

    // ==================== LÓGICA DE COMPARAÇÃO ====================
    switch (opcao) {
        case 1: // POPULAÇÃO (Maior vence)
            printf("Atributo Escolhido: Populacao\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s Venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s Venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // ÁREA (Maior vence)
            printf("Atributo Escolhido: Area\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("Resultado: %s Venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s Venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB (Maior vence)
            printf("Atributo Escolhido: PIB\n");
            printf("%s: %.2f Bilhoes de reais\n", nomeCidade1, pib1);
            printf("%s: %.2f Bilhoes de reais\n\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s Venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s Venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // PONTOS TURÍSTICOS (Maior vence)
            printf("Atributo Escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s Venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s Venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // DENSIDADE DEMOGRÁFICA (Atenção: Menor vence!)
            printf("Atributo Escolhido: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n\n", nomeCidade2, densidade2);

            // Regra invertida: quem tem a MENOR densidade ganha
            if (densidade1 < densidade2) {
                printf("Resultado: %s Venceu! (Menor densidade)\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s Venceu! (Menor densidade)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default: // Tratamento de erro (Requisito Não Funcional de Segurança)
            printf("Opcao invalida! Por favor, escolha um numero de 1 a 5.\n");
            break;
    }

    printf("=================================================\n");
    return 0;
}
