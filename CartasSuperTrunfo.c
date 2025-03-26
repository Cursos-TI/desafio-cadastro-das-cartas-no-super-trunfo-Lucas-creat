#include<stdio.h>

int main (){
    char estado1[20];
    char estado2[20];
    char codigodacarta1[20];
    char codigodacarta2[20];
    char nomecidade1[20];
    char nomecidade2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontosturisticos1;
    int pontosturisticos2;
    float densidade1;
    float densidade2;
    float percapita1;
    float percapita2;

    printf ("Qual nome do estado? \n");
    scanf ("%s", &estado1);

    printf ("Qual codigo da carta? \n");
    scanf ("%s", &codigodacarta1);

    printf ("Qual nome da cidade? \n");
    scanf ("%s", &nomecidade1);

    printf ("Quantidade de habitantes? \n");
    scanf ("%d", &populacao1);

    printf ("Qual a area da cidade? \n");
    scanf ("%f", &area1);

    printf ("Qual pib? \n");
    scanf ("%f", &pib1);

    printf ("Quantos pontos turisticos? \n");
    scanf ("%d", &pontosturisticos1);

    densidade1 = pib1 / populacao1;
    percapita1 = area1 / populacao1;

    printf ("Qual nome do estado? \n");
    scanf ("%s", &estado2);

    printf ("Qual codigo da carta? \n");
    scanf ("%s", &codigodacarta2);

    printf ("Qual nome da cidade? \n");
    scanf ("%s", &nomecidade2);

    printf ("Quantidade de habitantes? \n");
    scanf ("%d", &populacao2);

    printf ("Qual a area da cidade? \n");
    scanf ("%f", &area2);

    printf ("Qual pib? \n");
    scanf ("%f", &pib2);

    printf ("Quantos pontos turisticos? \n");
    scanf ("%d", &pontosturisticos2);

    densidade2 = pib2 / populacao2;
    percapita2 = area2 / populacao2;

    printf ("Estado: %s\n", estado1);
    printf ("Codigo: %s\n", codigodacarta1);
    printf ("Cidade: %s\n", nomecidade1);
    printf ("População: %d\n", populacao1);
    printf ("Area em km²: %.3f\n", area1);
    printf ("PIB: %.4f\n", pib1);
    printf ("Pontos turisticos: %d\n", pontosturisticos1);
    printf ("Densidade populacional: %.4f\n", densidade1);
    printf ("Pib per capita: %.4f\n", percapita1);

    printf ("Estado: %s\n", estado2);
    printf ("Codigo: %s\n", codigodacarta2);
    printf ("Cidade: %s\n", nomecidade2);
    printf ("População: %d\n", populacao2);
    printf ("Area em km²: %.3f\n", area2);
    printf ("PIB: %.4f\n", pib2);
    printf ("Pontos turisticos: %d\n", pontosturisticos2);
    printf ("Densidade populacional: %.4f\n", densidade2);
    printf ("Pib per capita: %.4f\n", percapita2);

    float superpoder1, superpoder2;
    superpoder1 = populacao1 + area1 + pib1 + percapita1 + densidade1 + pontosturisticos1;
    superpoder2 = populacao2 + area2 + pib2 + percapita2 + densidade2 + pontosturisticos2;
    
    printf("Comparação de cartas (Atributo População): \n");
    printf("Carta1 - %s: %d \n", nomecidade1, populacao1);
    printf("Carta2 - %s: %d \n", nomecidade2, populacao2);

    if ( populacao1 > populacao2){
        printf("Carta 1 - %s venceu! \n", nomecidade1);
    } else {
        printf("Carta 2 - %s, venceu! \n", nomecidade2);
    }

    printf("Comparação de cartas (Atributo Area em km²): \n");
    printf("Carta1 - %s: %f \n", nomecidade1, area1);
    printf("Carta2 - %s: %f \n", nomecidade2, area2);

    if ( area1 > area2){
        printf("Carta 1 - %s venceu! \n", nomecidade1);
    } else {
        printf("Carta 2 - %s, venceu! \n", nomecidade2);
    }

    printf("Comparação de cartas (Atributo PIB): \n");
    printf("Carta1 - %s: %f \n", nomecidade1, pib1);
    printf("Carta2 - %s: %f \n", nomecidade2, pib2);

    if ( pib1 > pib2){
        printf("Carta 1 - %s venceu! \n", nomecidade1);
    } else {
        printf("Carta 2 - %s, venceu! \n", nomecidade2);
    }

    printf("Comparação de cartas (Atributo Pontos Turisticos): \n");
    printf("Carta1 - %s: %d \n", nomecidade1, pontosturisticos1);
    printf("Carta2 - %s: %d \n", nomecidade2, pontosturisticos2);

    if ( pontosturisticos1 > pontosturisticos2){
        printf("Carta 1 - %s venceu! \n", nomecidade1);
    } else {
        printf("Carta 2 - %s, venceu! \n", nomecidade2);
    }

    printf("Comparação de cartas (Atributo Densidade Populacional): \n");
    printf("Carta1 - %s: %f \n", nomecidade1, densidade1);
    printf("Carta2 - %s: %f \n", nomecidade2, densidade2);

    if ( densidade1 < densidade2){
        printf("Carta 1 - %s venceu! \n", nomecidade1);
    } else {
        printf("Carta 2 - %s, venceu! \n", nomecidade2);
    }

    printf("Comparação de cartas (Atributo PIB per capita): \n");
    printf("Carta1 - %s: %f \n", nomecidade1, percapita1);
    printf("Carta2 - %s: %f \n", nomecidade2, percapita2);

    if ( percapita1 > percapita2){
        printf("Carta 1 - %s venceu! \n", nomecidade1);
    } else {
        printf("Carta 2 - %s, venceu! \n", nomecidade2);
    }

    printf("Comparação de cartas (Atributo SuperPoder): \n");
    printf("Carta1 - %s: %f \n", nomecidade1, superpoder1);
    printf("Carta2 - %s: %f \n", nomecidade2, superpoder2);

    if ( superpoder1 > superpoder2){
        printf("Carta 1 - %s venceu! \n", nomecidade1);
    } else {
        printf("Carta 2 - %s, venceu! \n", nomecidade2);
    }

    return 0;
}
