#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estado1[20] = "Minas";
    char estado2[20] = "Minas";
    char codigodacarta1[20] = "A01";
    char codigodacarta2[20] = "B02";
    char cidade1[20] = "BeloHorizonte";
    char cidade2[20] = "Uberlandia";
    int populacao1 = 222136;
    int populacao2 = 713224;
    float area1 = 331.354;
    float area2 = 4115.206;
    float pib1 = 87.000;
    float pib2 = 32.336;
    int pontoturisticos1 = 50;
    int pontoturisticos2 = 30;
    float densidade1;
    float densidade2;
    float percapita1;
    float percapita2;

    densidade1 = pib1 / populacao1;
    percapita1 = area1 / populacao1;

    densidade2 = pib2 / populacao2;
    percapita2 = area2 / populacao2;

    float superpoder1, superpoder2;
    superpoder1 = populacao1 + area1 + pib1 + percapita1 + densidade1 + pontoturisticos1;
    superpoder2 = populacao2 + area2 + pib2 + percapita2 + densidade2 + pontoturisticos2;

    int opcao1;
    int opcao2;
   
    printf("### Jogo SuperTrunfo ###\n");
    printf("Estes são os atributo:\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. densidade Populacional\n");
    printf("6. Percapita\n");
    printf("7. Super Poder\n");
    printf("Escolha um atributo que deseja comparar\n");

    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("Atributo comparado: População\n");
        printf("A população é: %d\n", populacao1);
        opcao1 = populacao1;
        break;
    case 2:
        printf("Atributo comparado: Area\n");
        printf("A Area é: %f\n", area1);
        opcao1 = area1;
        break;
    case 3:
        printf("Atributo comparado: PIB\n");
        printf("o PIB é: %f\n", pib1);
        opcao1 = pib1;
        break;
    case 4:
        printf("Atributo comparado: Pontos Turisticos:\n");
        printf("Os Pontos Turisticos são: %d\n", pontoturisticos1);
        opcao1 = pontoturisticos1;
        break;
    case 5:
        printf("Atributo comparado: Densidade Demografica\n");
        printf("A Densidade Demografica é: %f\n", densidade1);
        opcao1 = densidade1;
        break;
    case 6:
        printf("Atributo comparado: Percapita\n");
        printf("A Percapita é: %f\n", percapita1);
        opcao1 = percapita1;
        break;
    case 7 :
        printf("Atributo comparado: Super Poder\n");
        printf("O Super Poder é: %f\n", superpoder1);
        opcao1 = superpoder1;
        break;
    
    }

    printf("Escolha o segundo atributo:\n");
    printf("Estes são os atributo:\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. densidade Populacional\n");
    printf("6. Percapita\n");
    printf("7. Super Poder\n");
    // colocar apaço entre o " e o % para o codigo não parar
    scanf(" %d", &opcao2);
  
    if (opcao1 == opcao2){
            printf("Você escolheu o mesmo atributo!\n");
        } else {
        
        switch (opcao2)
        {
        case 1:
            printf("Atributo comparado: População\n");
            printf("A população é: %d\n", populacao2);
            opcao2 = populacao2;
            break;
        case 2:
            printf("Atributo comparado: Area\n");
            printf("A Area é: %f\n", area2);
            opcao2 = area2;
            break;
        case 3:
            printf("Atributo comparado: PIB\n");
            printf("o PIB é: %f\n", pib2);
            opcao2 = pib2;
            break;
        case 4:
            printf("Atributo comparado: Pontos Turisticos:\n");
            printf("Os Pontos Turisticos são: %d\n", pontoturisticos2);
            opcao2 = pontoturisticos2;
            break;
        case 5:
            printf("Atributo comparado: Densidade Demografica\n");
            printf("A Densidade Demografica é: %f\n", densidade2);
            opcao2 = densidade2;
            break;
        case 6:
            printf("Atributo comparado: Percapita\n");
            printf("A Percapita é: %f\n", percapita2);
            opcao2 = percapita2;
            break;
        case 7:
            printf("Atributo comparado: Super Poder\n");
            printf("O Super Poder é: %f\n", superpoder2);
            opcao2 = superpoder2;
            break;
        default:
            printf("Opção invalida\n");
            break;
        }
    }
    if (opcao1 > opcao2)
    {
        printf("%s vs %s\n", cidade1, cidade2);
        printf("Valores dos atributos: %d vs %d\n", opcao1, opcao2);
        printf("A cidade: %s venceu\n", cidade1);
    } else if (opcao1 < opcao2)
    {
        printf("%s vs %s\n", cidade1, cidade2);
        printf("Valores dos atributos: %d vs %d\n", opcao1, opcao2);
        printf("A cidade: %s venceu\n", cidade2);
    } else if ( opcao1 == opcao2) 
    {
        printf("%s vs %s\n", cidade1, cidade2);
        printf("Valores dos atributos: %d vs %d\n", opcao1, opcao2);
        printf("Deu empate");
    }
    
    
}