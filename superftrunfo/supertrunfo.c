#include <stdio.h>

int main() {
    // Carta 1
    char estado[20];
    char codigo[10];
    char cidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int turismo;
    float dp;     // densidade populacional
    float renda;  // PIB per capita
    float superPoder1;

    // Carta 2
    char estado2[20];
    char codigo2[10];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float dp2;
    float renda2;
    float superPoder2;

    printf("Bem vindo(a) ao jogo Super-Trunfo.\n\n");

    // ===== Carta 1 =====
    printf("Cadastro da Carta 1\n");

    printf("Estado:\n");
    scanf("%s", estado);

    printf("Codigo:\n");
    scanf("%s", codigo);

    printf("Cidade:\n");
    scanf("%s", cidade);

    printf("Populacao:\n");
    scanf("%lu", &populacao);

    printf("Area (km²):\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Pontos turisticos:\n");
    scanf("%d", &turismo);

    dp = (float)populacao / area;
    renda = pib / (float)populacao;

    // ===== Carta 2 =====
    printf("\nCadastro da Carta 2\n");

    printf("Estado:\n");
    scanf("%s", estado2);

    printf("Codigo:\n");
    scanf("%s", codigo2);

    printf("Cidade:\n");
    scanf("%s", cidade2);

    printf("Populacao:\n");
    scanf("%lu", &populacao2);

    printf("Area (km²):\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Pontos turisticos:\n");
    scanf("%d", &turismo2);

    dp2 = (float)populacao2 / area2;
    renda2 = pib2 / (float)populacao2;

    // ===== Super Poder =====
    superPoder1 =
        (float)populacao +
        area +
        pib +
        turismo +
        renda +
        (1 / dp);

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        turismo2 +
        renda2 +
        (1 / dp2);

    // ===== Comparações =====
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turismo > turismo2);

    // densidade: menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dp < dp2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", renda > renda2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
