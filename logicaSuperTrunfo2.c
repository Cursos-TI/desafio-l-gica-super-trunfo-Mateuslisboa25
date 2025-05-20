#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
struct Carta {
    char estado[50];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
};

int main() {
    struct Carta carta1, carta2;
    char atributo[30];

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);

    printf("Código da carta: ");
    scanf(" %[^\n]", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);


    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);

    printf("Código da carta: ");
    scanf(" %[^\n]", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);



    // Exibe as cartas
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\n", carta1.nome);
    printf("Estado: %s\n", carta1.estado);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);


    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", carta2.nome);
    printf("Estado: %s\n", carta2.estado);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    

    // Comparação
    printf("\nQual atributo deseja comparar? (populacao / area / pib / pontos_turisticos / ): ");
    scanf(" %[^\n]", atributo);

    printf("\n--- Resultado da comparação ---\n");

    if (strcmp(atributo, "populacao") == 0) {
        if (carta1.populacao > carta2.populacao)
            printf("Carta vencedora: %s (maior população)\n", carta1.nome);
        else
            printf("Carta vencedora: %s (maior população)\n", carta2.nome);

    } else if (strcmp(atributo, "area") == 0) {
        if (carta1.area > carta2.area)
            printf("Carta vencedora: %s (maior área)\n", carta1.nome);
        else
            printf("Carta vencedora: %s (maior área)\n", carta2.nome);

    } else if (strcmp(atributo, "pib") == 0) {
        if (carta1.pib > carta2.pib)
            printf("Carta vencedora: %s (maior PIB)\n", carta1.nome);
        else
            printf("Carta vencedora: %s (maior PIB)\n", carta2.nome);

    } else if (strcmp(atributo, "pontos_turisticos") == 0) {
        if (carta1.pontos_turisticos > carta2.pontos_turisticos)
            printf("Carta vencedora: %s (mais pontos turísticos)\n", carta1.nome);
        else
            printf("Carta vencedora: %s (mais pontos turísticos)\n", carta2.nome);

    } else if (strcmp(atributo, "densidade") == 0) {
        if (carta1.densidade < carta2.densidade)
            printf("Carta vencedora: %s (menor densidade)\n", carta1.nome);
        else
            printf("Carta vencedora: %s (menor densidade)\n", carta2.nome);

    } else {
        printf("Atributo inválido!\n");
    }

    return 0;
}
