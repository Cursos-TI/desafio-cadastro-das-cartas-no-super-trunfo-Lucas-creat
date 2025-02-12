#include<stdio.h>
    int main(){

    int codigocidade;
    char nomecidade[20];
    int populacao;
    int area;
    int pib;
    int pontosturisticos;
    float populacaopercapita;
    float pibpercapita;

    printf("Qual código da cidade?\n");
    scanf("%d", &codigocidade);
    printf("Qual o nome da cidade?\n");
    scanf("%s", &nomecidade);
    printf("Qual o número de habitantes?\n");
    scanf("%d", &populacao);
    printf("Qual a área total da cidade?\n");
    scanf("%d", &area);
    printf("Qual o PIB da cidade?\n");
    scanf("%d", &pib);
    printf("Quantos pontos turisticos a cidade possui?\n");
    scanf("%d", &pontosturisticos);

    printf("Código da cidade: %d\n", codigocidade);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Número de habitantes: %d\n", populacao);
    printf("Área total da cidade: %d\n", area);
    printf("PIB da cidade: %d\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);

    populacaopercapita = (float) populacao / area;
    pibpercapita = (float) populacao / pib;

    printf("População percapita: %.3f\n", populacaopercapita);
    printf("PIB percapita: %.3f\n", pibpercapita);

    return 0;

    }