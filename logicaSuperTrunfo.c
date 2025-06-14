#include <stdio.h>
#include <string.h>

// Programa Super Trunfo - Comparação entre duas cartas
int main() {
    // Dados da carta 1
    char estado1[3], codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Dados da carta 2
    char estado2[3], codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Entrada dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Cidade: %s (%s)\n", nomeCidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Cidade: %s (%s)\n", nomeCidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Comparação por População
    printf("\n=== Comparação por População ===\n");
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        printf("%d habitantes x %d habitantes\n", populacao1, populacao2);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        printf("%d habitantes x %d habitantes\n", populacao2, populacao1);
    } else {
        printf("Resultado: Empate! Ambas têm %d habitantes.\n", populacao1);
    }

    return 0;
}
