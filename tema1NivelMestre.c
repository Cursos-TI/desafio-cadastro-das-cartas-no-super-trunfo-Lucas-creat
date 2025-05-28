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

    float superpoder1, superpoder2;
    superpoder1 = populacao1 + area1 + pib1 + percapita1 + densidade1 + pontoturisticos1;
    superpoder2 = populacao2 + area2 + pib2 + percapita2 + densidade2 + pontoturisticos2;
    
    int resultadopopulacao, resultadoarea, resultadopib, resultadopontoturisticos, resultadodensidade, resultadopibpercapita, resultadosuperpoder;

    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopontoturisticos = pontoturisticos1 > pontoturisticos2;
    resultadodensidade = densidade1 < densidade2;
    resultadopibpercapita = percapita1 > percapita2;
    resultadosuperpoder = superpoder1 > superpoder2;

    printf ("Comparação de cartas\n");
    printf ("População: carta 2 venceu %d\n", resultadopopulacao);
    printf ("Area: carta 2 venceu %d\n", resultadoarea);
    printf ("PIB: carta 1 venceu %d\n", resultadopib);
    printf ("Pontos Turisticos: carta 1 venceu %d\n", resultadopontoturisticos);
    printf ("Densidade Populacional: carta 1 venceu %d\n", resultadodensidade);
    printf ("PIB per capita: carta 1 venceu %d\n", resultadopibpercapita);
    printf ("Super Poder: carta 2 venceu %d\n", resultadosuperpoder);


}