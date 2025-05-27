#include <stdio.h>

int main(){
    
    char estado1[20];
    char estado2[20];
    char codigo1[20];
    char codigo2[20];
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontoturisticos1;
    int pontoturisticos2;

    printf("Insira dos dados da primeira Carta:\n");

    printf("Qual Estado?\n");
    scanf("%s", &estado1);
    printf("Qual Código da carta?\n");
    scanf("%s", &codigo1);
    printf("Qual Nome da Cidade?\n");
    scanf("%s", &cidade1);
    printf("Qual a Quantidade de habitantes?\n");
    scanf("%d", &populacao1);
    printf("Qual a Area da Cidade?\n");
    scanf("%f", &area1);
    printf("Qual o PIB?\n");
    scanf("%f", &pib1);
    printf("Quantos Pontos Turisticos?\n");
    scanf("%d", &pontoturisticos1);

    printf("Insira dos dados da segunda Carta:\n");

    printf("Qual Estado?\n");
    scanf("%s", &estado2);
    printf("Qual Código da carta?\n");
    scanf("%s", &codigo2);
    printf("Qual Nome da Cidade?\n");
    scanf("%s", &cidade2);
    printf("Qual a Quantidade de habitantes?\n");
    scanf("%d", &populacao2);
    printf("Qual a Area da Cidade?\n");
    scanf("%f", &area2);
    printf("Qual o PIB?\n");
    scanf("%f", &pib2);
    printf("Quantos Pontos Turisticos?\n");
    scanf("%d", &pontoturisticos2);

    printf("Carta 1\n");
    printf ("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Área: %fkm²\n", area1);
    printf("PIB: %fBilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontoturisticos1);
    
    printf("Carta 2\n");
    printf ("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Área: %fkm²\n", area2);
    printf("PIB: %fBilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontoturisticos2);

}