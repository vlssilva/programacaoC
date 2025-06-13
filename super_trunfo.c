#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;                // Armazena a letra do estado (A-H)
    char codigo1[4];            // Armazena o código da carta (ex: A01)
    char nomeCidade1[50];       // Armazena o nome da cidade
    int populacao1;             // Armazena a população da cidade
    float area1;                // Armazena a área da cidade em km²
    float pib1;                 // Armazena o PIB da cidade em bilhões de reais
    int pontosTuristicos1;      // Armazena o número de pontos turísticos da cidade

    // Leitura dos dados da primeira carta
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1); // Lê o estado
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1); // Lê o código da carta
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nomeCidade1); // Lê o nome da cidade
    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1); // Lê a população
    printf("Digite a área da cidade da Carta 1 (em km²): ");
    scanf("%f", &area1); // Lê a área
    printf("Digite o PIB da cidade da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1); // Lê o PIB
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1); // Exibe o estado
    printf("Código: %s\n", codigo1); // Exibe o código
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe o nome da cidade
    printf("População: %d\n", populacao1); // Exibe a população
    printf("Área: %.2f km²\n", area1); // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos

    // Declaração das variáveis para a segunda carta
    char estado2;                // Armazena a letra do estado (A-H)
    char codigo2[4];            // Armazena o código da carta (ex: B02)
    char nomeCidade2[50];       // Armazena o nome da cidade
    int populacao2;             // Armazena a população da cidade
    float area2;                // Armazena a área da cidade em km²
    float pib2;                 // Armazena o PIB da cidade em bilhões de reais
    int pontosTuristicos2;      // Armazena o número de pontos turísticos da cidade

    // Leitura dos dados da segunda carta
    printf("\nDigite o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2); // Lê o estado
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2); // Lê o código da carta
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nomeCidade2); // Lê o nome da cidade
    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2); // Lê a população
    printf("Digite a área da cidade da Carta 2 (em km²): ");
    scanf("%f", &area2); // Lê a área
    printf("Digite o PIB da cidade da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2); // Lê o PIB
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2); // Lê o número de pontos turísticos

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2); // Exibe o estado
    printf("Código: %s\n", codigo2); // Exibe o código
    printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade
    printf("População: %d\n", populacao2); // Exibe a população
    printf("Área: %.2f km²\n", area2); // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos

    return 0; // Indica que o programa terminou com sucesso
}
