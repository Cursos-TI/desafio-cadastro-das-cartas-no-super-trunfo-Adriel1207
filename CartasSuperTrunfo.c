#include <stdio.h>

int main(){
    //Declaração de variaveis da carta 1.
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[10] = "Manaus";
    int populacao1 = 2064;
    float area1 =11401;
    float pib1 = 103281;
    int pontosturisticos1 = 18;
    float densidadepopulacional1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    //Declaração de variaveis da carta 2.
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[10] = "Salvador";
    int populacao2 = 2418;
    float area2 = 6938;
    float pib2 = 62954;
    int pontosturisticos2 = 13;
    float densidadepopulacional2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    //Entrada de dados da carta 1.
    printf("Carta1:\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite o numero de habitantes:\n");
    scanf("%i", &populacao1);   
    printf("Digite a area da cidade em quilometros quadrados:\n");
    scanf("%f", &area1);    
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);
    printf(" \n");

    //Entrada de dados da carta 2.
    printf("Carta2:\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite o numero de habitantes:\n");
    scanf("%i", &populacao2);
    printf("Digite a area da cidade em quilometros quadrados:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);
    printf(" \n");

    //Saida de dados da carta 1.
    printf("Carta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nomde da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.6f Km²\n", area1);
    printf("PIB: %.5f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.6f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.7f reais\n\n", pibpercapita1);
    
    //Saida de dados da carta 2.
    printf("Carta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nomde da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.6f Km²\n", area2);
    printf("PIB: %.5f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.6f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.7f reais\n\n", pibpercapita2);

    return 0;
    }