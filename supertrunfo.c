#include <stdio.h>

int main() {
    // --- DADOS PRÉ-CADASTRADOS (CARTA 1) ---
    char nome1[50] = "Brasil";
    unsigned long int pop1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1600.0; // Em bilhões
    int pontos1 = 80;
    float densidade1 = 214000000 / 8515767.0; // ~25.13 hab/km²

    // --- DADOS PRÉ-CADASTRADOS (CARTA 2) ---
    char nome2[50] = "Argentina";
    unsigned long int pop2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 490.0; // Em bilhões
    int pontos2 = 45;
    float densidade2 = 46000000 / 2780400.0; // ~16.54 hab/km²

    // Variáveis de controle dos menus e pontuação
    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    
    char nomeAtributo1[30], nomeAtributo2[30];

    // ====================== PRIMEIRO MENU ======================
    printf("========== SUPER TRUNFO: AVANCADO ==========\n");
    printf("Escolha o PRIMEIRO atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area (km²)\n");
    printf("3 - PIB (Bilhoes)\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("--------------------------------------------\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao1);

    // Atribuição das variáveis baseada na primeira escolha
    switch (opcao1) {
        case 1:
            valor1_carta1 = (float)pop1; valor1_carta2 = (float)pop2;
            sprintf(nomeAtributo1, "Populacao"); break;
        case 2:
            valor1_carta1 = area1; valor1_carta2 = area2;
            sprintf(nomeAtributo1, "Area"); break;
        case 3:
            valor1_carta1 = pib1; valor1_carta2 = pib2;
            sprintf(nomeAtributo1, "PIB"); break;
        case 4:
            valor1_carta1 = (float)pontos1; valor1_carta2 = (float)pontos2;
            sprintf(nomeAtributo1, "Pontos Turisticos"); break;
        case 5:
            // Para a densidade, invertemos o valor na soma final usando o operador ternário mais adiante
            valor1_carta1 = densidade1; valor1_carta2 = densidade2;
            sprintf(nomeAtributo1, "Densidade Demografica"); break;
        default:
            printf("\nOpcao invalida! Reinicie o jogo.\n");
            return 0;
    }

    // ====================== SEGUNDO MENU (DINÂMICO) ======================
    printf("\n--------------------------------------------\n");
    printf("Escolha o SEGUNDO atributo (Diferente do primeiro):\n");
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area (km²)\n");
    if (opcao1 != 3) printf("2 - PIB (Bilhoes)\n"); // Mantém o índice original para o switch
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica\n");
    printf("--------------------------------------------\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao2);

    // Validação se o jogador tentou trapacear escolhendo o mesmo número
    if (opcao1 == opcao2) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Atribuição das variáveis baseada na segunda escolha
    switch (opcao2) {
        case 1:
            valor2_carta1 = (float)pop1; valor2_carta2 = (float)pop2;
            sprintf(nomeAtributo2, "Populacao"); break;
        case 2:
            valor2_carta1 = area1; valor2_carta2 = area2;
            sprintf(nomeAtributo2, "Area"); break;
        case 3:
            valor2_carta1 = pib1; valor2_carta2 = pib2;
            sprintf(nomeAtributo2, "PIB"); break;
        case 4:
            valor2_carta1 = (float)pontos1; valor2_carta2 = (float)pontos2;
            sprintf(nomeAtributo2, "Pontos Turisticos"); break;
        case 5:
            valor2_carta1 = densidade1; valor2_carta2 = densidade2;
            sprintf(nomeAtributo2, "Densidade Demografica"); break;
        default:
            printf("\nOpcao invalida! Reinicie o jogo.\n");
            return 0;
    }

    // ====================== LÓGICA DE SOMA E OPERADOR TERNÁRIO ======================
    
    /* REGRA DA DENSIDADE DEMOGRÁFICA:
       Como a menor densidade vence, na hora de somar os pontos, uma densidade menor deve AJUDAR a carta.
       Para calcular a soma de forma justa, se o atributo for Densidade (Opção 5), usamos o Operador Ternário
       para bonificar a carta com menor valor adicionando o inverso ou invertendo os pesos na comparação.
       
       Para o cálculo matemático da soma refletir as regras:
       Se for densidade, subtraímos o valor da densidade da soma (assim, quem tem menor densidade perde menos e fica com uma soma final maior!).
    */
    
    float somaCarta1 = (opcao1 == 5 ? -valor1_carta1 : valor1_carta1) + (opcao2 == 5 ? -valor2_carta1 : valor2_carta1);
    float somaCarta2 = (opcao1 == 5 ? -valor1_carta2 : valor1_carta2) + (opcao2 == 5 ? -valor2_carta2 : valor2_carta2);

    // ====================== EXIBIÇÃO DOS RESULTADOS ======================
    printf("\n=================================================\n");
    printf("              RESULTADO DA RODADA                \n");
    printf("=================================================\n");
    printf("Cartas na disputa: %s VS %s\n\n", nome1, nome2);

    // Atributo 1
    printf("Atributo 1: %s\n", nomeAtributo1);
    printf(" - %s: %.2f\n", nome1, valor1_carta1);
    printf(" - %s: %.2f\n", nome2, valor1_carta2);
    
    // Atributo 2
    printf("\nAtributo 2: %s\n", nomeAtributo2);
    printf(" - %s: %.2f\n", nome1, valor2_carta1);
    printf(" - %s: %.2f\n", nome2, valor2_carta2);

    // Comparativo das Somas Reais Calculadas
    printf("\n--------------------------------------------\n");
    // Usamos operador ternário para exibir quem venceu cada atributo individualmente no relatório
    printf("Vencedor Atributo 1: %s\n", (opcao1 == 5) ? (valor1_carta1 < valor1_carta2 ? nome1 : nome2) : (valor1_carta1 > valor1_carta2 ? nome1 : nome2));
    printf("Vencedor Atributo 2: %s\n", (opcao2 == 5) ? (valor2_carta1 < valor2_carta2 ? nome1 : nome2) : (valor2_carta1 > valor2_carta2 ? nome1 : nome2));
    printf("--------------------------------------------\n");

    // Resultado Final baseado na Soma Pontuada
    printf("\n>>> RESULTADO FINAL (Baseado na Soma dos Atributos) <<<\n");
    
    if (somaCarta1 > somaCarta2) {
        printf("VENCEDOR: %s!\n", nome1);
    } else if (somaCarta2 > somaCarta1) {
        printf("VENCEDOR: %s!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("=================================================\n");

    return 0;
}
