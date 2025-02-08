#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
  
    int codigocidade;
    char nomecidade[20];
    float populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Qual código da cidade?\n");
    scanf("%d", &codigocidade);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &nomecidade);

    printf("Qual o número de habitantes?\n");
    scanf("%f", &populacao);

    printf("Qual a área total da cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos a cidade possui?\n");
    scanf("%d", &pontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Código da cidade: %d\n", codigocidade);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Número de habitantes: %f\n", populacao);
    printf("Área total da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);

    return 0;
}
