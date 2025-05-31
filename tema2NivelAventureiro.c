#include <stdio.h>

int main(){
    
    char estado1[20] = "A";
    char estado2[20] = "B";
    char codigo1[20] = "A01";
    char codigo2[20] = "B02";
    char cidade1[20] = "BH";
    char cidade2[20] = "RJ";
    float populacao1 = 6.006887;
    float populacao2 = 16.055174;
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

    float superpoder1, superpoder2;
    superpoder1 = populacao1 + area1 + pib1 + percapita1 + densidade1 + pontoturisticos1;
    superpoder2 = populacao2 + area2 + pib2 + percapita2 + densidade2 + pontoturisticos2;
    
    printf("Carta 1\n");
    printf ("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontoturisticos1);
    printf("Densidade Populacional: %.2fhab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("Super Poder: %f\n", superpoder1);

    printf("Carta 2\n");
    printf ("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontoturisticos2);
    printf("Densidade Populacional: %.2fhab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("Super Poder: %f\n", superpoder1);

    int opcao;
    int populacao;
    float area;
    float pib;
    int pontoturistico;
    float densidade;
    float percapita;
    float superpoder;

    printf("### Jogo SuperTrunfo ###\n");
    printf("Estes são os atributo:\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. densidade Populacional\n");
    printf("6. Percapita\n");
    printf("7. Super Poder\n");
    printf("Escolha o número do atributo que deseja comparar\n");
    
    scanf("%d", &opcao);
    
    switch (opcao){
    case 1:
        printf("Atributo comparado: População\n");
    if (populacao1 == populacao2){
        printf("### Jogo empatou ###\n");
    } else if ( populacao1 > populacao2)
    {
        printf("A %s venceu!", cidade1);
        printf("A população de %s que é %f e maior que a população de %s que é %f\n", cidade1, populacao1, cidade2, populacao2);
    } else if ( populacao1 < populacao2)
    {
        printf("A %s venceu!\n", cidade2);
        printf("A população de %s que é %f e maior que a população de %s que é %f\n", cidade2, populacao2, cidade1, populacao1);
    }
        break; 
    case 2:       
    printf("Atributo comparado: Area\n");
    if (area1 == area2)
    {
        printf("### Jogo empatou ###\n");
    } else if ( area1 > area2)
    {
        printf("A %s venceu!", cidade1);
        printf("A area de %s que é %f e maior que a população de %s que é %f\n", cidade1, area1, cidade2, area2);
    } else if ( area1 < area2)
    {
        printf("A %s venceu!\n", cidade2);
        printf("A Area de %s que é %f e maior que a Area de %s que é %f\n", cidade2, area2, cidade1, area1);
        
    }break;

    case 3:       
    printf("Atributo comparado: PIB\n");
    if (pib1 == pib2)
    {
        printf("### Jogo empatou ###\n");
    } else if (pib1 > pib2)
    {
        printf("A %s venceu!\n", cidade1);
        printf("O PIB de %s que é %f e maior que o PIB de %s que é %f\n", cidade1, pib1, cidade2, pib2);
    } else if (pib1 < pib2)
    {
        printf("A %s venceu!\n", cidade2);
        printf("O PIB de %s que é %f e maior que o PIB de %s que é %f\n", cidade2, pib2, cidade1, pib1);
        
    }break;
    case 4:       
    printf("Atributo comparado: Pontos Turisticos:\n");
    if (pontoturisticos1 == pontoturisticos2)
    {
        printf("### Jogo empatou ###\n");
    } else if ( pontoturisticos1 > pontoturisticos2)
    {
        printf("A %s venceu!\n", cidade1);
        printf("Os Ponto Turisticos de %s que é %d e maior que os Pontos Turisticos de %s que é %d\n", cidade1, pontoturisticos1, cidade2, pontoturisticos2);
    } else if ( pontoturisticos1 < pontoturisticos2)
    {
        printf("A %s venceu!\n", cidade2);
        printf("Os Ponto Turisticos de %s que é %d e maior que os Pontos Turisticos de %s que é %d\n", cidade2, pontoturisticos2, cidade1, pontoturisticos1);
        
    }break;
    case 5:       
    printf("Atributo comparado: Densidade Demografica\n");
    if (densidade1 == densidade2)
    {
        printf("### Jogo empatou ###\n");
    } else if ( densidade1 > densidade2)
    {
        printf("A %s venceu!\n", cidade1);
        printf("A Densidade Demografica de %s que é %f e maior que a Densidade Demografica de %s que é %f\n", cidade1, densidade1, cidade2, densidade2);
    } else if ( densidade1 < densidade2)
    {
        printf("A %s venceu!\n", cidade2);
        printf("A Densidade Demografica de %s que é %f e maior que a Densidade Demografica de %s que é %f\n", cidade2, densidade2, cidade1, densidade1);
        
    }break;
    case 6:       
    printf("Atributo comparado: Percapita\n");
    if (percapita1 == percapita2)
    {
        printf("### Jogo empatou ###\n");
    } else if ( percapita1 > percapita2)
    {
        printf("A %s venceu!", cidade1);
        printf("A Percapita de %s que é %f e maior que a Percapita de %s que é %f\n", cidade1, percapita1, cidade2, percapita2);
    } else if ( percapita1 < percapita2)
    {
        printf("A %s venceu!\n", cidade2);
        printf("A Percapita de %s que é %f e maior que a Percapita de %s que é %f\n", cidade2, percapita2, cidade1, percapita1);
        
    }break;
    case 7:       
    printf("Atributo comparado: Super Poder\n");
    if (superpoder1 == superpoder2)
    {
        printf("### Jogo empatou ###\n");
    } else if ( superpoder1 > superpoder2)
    {
        printf("A %s venceu!", cidade1);
        printf("O Super Poder de %s que é %f e maior que o Super Poder de %s que é %f\n", cidade1, superpoder1, cidade2, superpoder2);
    } else if ( superpoder1 < superpoder2)
    {
        printf("A %s venceu!\n", cidade2);
        printf("O Super Poder de %s que é %f e maior que o Super Poder de %s que é %f\n", cidade2, superpoder2, cidade1, superpoder1);
        
    }break;

}
    

}