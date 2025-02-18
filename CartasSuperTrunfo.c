#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/* Exemplos de cidades:
nome: campinas          nome: belo horizonte
area: 795,7             area: 331,4
populacao: 1.139.047    populacao: 2.315.560
pib: 72.946.774,92      pib: 105.829.675,053
pontos turi: 15         pontos turi: 20
*/

int main() {

    // Defina variáveis separadas para cada atributo da cidade.

    char codCidade1[4], nome1[30];
    char codCidade2[4], nome2[30];
    float area1, densidadePop1, pibPerCapita1;
    float area2, densidadePop2, pibPerCapita2;
    int populacao1, pib1, pontosTuristicos1;
    int populacao2, pib2, pontosTuristicos2;

    // Cadastro das Cartas:

    printf("*** Bem-vindo ao Jogo Super Trunfo Países! ***\n");

    printf("** Cadastro da primeira carta **\n");

    printf("Insira o código da cidade: \n");
    scanf("%3s", codCidade1);

    printf("Insira o nome da cidade: \n");
    scanf("%29s", nome1);

    printf("Insira a área em km² da cidade: \n");
    scanf("%f", &area1);

    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Insira o PIB da cidade: \n");
    scanf("%d", &pib1);

    printf("Insira a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);

    densidadePop1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("** Cadastro da segunda carta **\n");

    printf("Insira o código da cidade: \n");
    scanf("%3s", codCidade2);

    printf("Insira o nome da cidade: \n");
    scanf("%29s", nome2);

    printf("Insira a área em km² da cidade: \n");
    scanf("%f", &area2);

    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Insira o PIB da cidade: \n");
    scanf("%d", &pib2);

    printf("Insira a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:

    printf("*** Dados da Cidade 1 ***\n");

    printf("Codígo da Cidade: %s\n", codCidade1);
    printf("Nome: %s\n", nome1);
    printf("Área: %.2fkm²\n", area1);
    printf("População atual: %d\n", populacao1);
    printf("PIB: %d\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePop1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    
    printf("*** Dados da Cidade 2 ***\n");

    printf("Codígo da Cidade: %s\n", codCidade2);
    printf("Nome: %s\n", nome2);
    printf("Área: %.2fkm²\n", area2);
    printf("População atual: %d\n", populacao2);
    printf("PIB: %d\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    printf("*** Comparação de atributos das cartas ***\n");

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("%s tem mais pontos turísticos!\n", nome1);
    } else {
        printf("%s tem mais pontos turísticos!\n", nome2);
    }










    return 0;
}
