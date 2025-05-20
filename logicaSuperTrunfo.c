#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
    char estado1;
    char[10] codigocarta;
    char[20] nomedacidade;
    int populacao;
    float area;
    float pib;
    int pontosturisticos;


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("---Cadastrar Carta---\n");
    printf("Estado:\n");
    scanf("%s", &estado);
    printf("Código da carta:\n");
    scanf("%s", &codigocarta);
    printf("Nome da cidade:\n");
    scanf("%s", &nomedacidade);
    printf("População:\n");
    scanf("%d", &populacao)
    printf("Área em km²:\n");
    scanf("%f", &area);
    printf("Pib:\n");
    scanf("%f", &pib)
    printf("Pontos turisticos:\n");
    scanf("%d", &pontosturisticos);


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
