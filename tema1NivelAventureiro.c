#include <stdio.h>

int main(){
    
    char estado1[20] = "A";
    char estado2[20] = "B";
    char codigo1[20] = "A01";
    char codigo2[20] = "B02";
    char cidade1[20] = "BH";
    char cidade2[20] = "RJ";
    int populacao1 = 6.006887;
    int populacao2 = 16.055174;
    float area1 = 331.4;
    float area2 = 1200.25;
    float pib1 = 699.28;
    float pib2 = 300.50;
    int pontoturisticos1 = 50;
    int pontoturisticos2 = 30;

    float densidade1 = (float) area1 / populacao1;
    float densidade2 = (float) area2 / populacao2;
    float percapita1 = (float) pib1 / populacao1;
    float percapita2 = (float) pib2 / populacao2;

    printf("Carta 1\n");
    printf ("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontoturisticos1);
    printf("Densidade Populacional: %.2fhab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
  
    printf("Carta 2\n");
    printf ("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontoturisticos2);
    printf("Densidade Populacional: %.2fhab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
}