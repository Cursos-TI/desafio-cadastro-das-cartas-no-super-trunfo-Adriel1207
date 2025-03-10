#include <stdio.h>

int main(){
    //Declaração de variaveis da carta 1.
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[20] = "Manaus(AM)";
    unsigned long int populacao1 = 2676.93; //Milhoes
    float area1 = 11.401; //km²
    float pib1 = 103.281; //Bilhoes de reais
    int pontosturisticos1 = 18;
    
    //Declaração de variaveis da carta 2.
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[20] = "Salvador(BA)";
    unsigned long int populacao2 = 2418.00; //Milhoes
    float area2 = 693.8; //Km²
    float pib2 = 62.954; //Bilhoes de reais
    int pontosturisticos2 = 13;

    //Entrada de dados da carta 1.
    printf("Carta1:\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    setbuf(stdin,NULL); //Limpando buffer
    setbuf(stdin,NULL); //Limpando buffer
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
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    setbuf(stdin,NULL); //Limpando buffer
    setbuf(stdin,NULL); //Limpando buffer
    printf("Digite o numero de habitantes:\n");
    scanf("%i", &populacao2);
    printf("Digite a area da cidade em quilometros quadrados:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);
    printf(" \n");

    //Declaração de variaveis carta1; Densidade, Pib Per Capita e Super Poder.
    double densidadepopulacional1 = (double)populacao1 / area1;
    double pibpercapita1 = (double)pib1 / populacao1;
    double superpoder1 = (double)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1/densidadepopulacional1);

    //Declaração de variaveis carta2; Densidade, Pib Per Capita e Super Poder.
    double densidadepopulacional2 = (double)populacao2 / area2;
    double pibpercapita2 = (double)pib2 / populacao2;
    double superpoder2 = (double)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/densidadepopulacional2);

    //Saida de dados da carta 1.
    printf("Carta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nomde da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.3f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.3f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);
    
    //Saida de dados da carta 2.
    printf("Carta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nomde da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.3f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.3f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    //Compração para definir; "Carta 1 venceu" ou "Carta 2 venceu" para cada atributo
    int CartaGanhadorPopulacao = (populacao1 > populacao2) + (populacao1 < populacao2) *2;
    int CartaGanhadorArea = (area1 > area2) + (area1 < area2) *2;
    int CartaGanhadorPib = (pib1 > pib2) + (pib1 < pib2) *2;
    int CartaGanhadorPontosTuristicos = (pontosturisticos1 > pontosturisticos2) + (pontosturisticos1 < pontosturisticos2) *2;
    int CartaGanhadorDensidade = (1/densidadepopulacional1 > 1/densidadepopulacional2) + (1/densidadepopulacional1 < 1/densidadepopulacional2) *2;
    int CartaGanhadorPibPerCapita = (pibpercapita1 > pibpercapita2) + (pibpercapita1 < pibpercapita2) *2;
    int CartaGanhadorSuperPoder = (superpoder1 > superpoder2) + (superpoder1 < superpoder2) *2;

    //Compração para definir; "(0)" ou "(1)" para cada atributo
    int VerdadeiroFalsoPopulacao = populacao1 > populacao2;
    int VerdadeiroFalsoArea = area1 > area2;
    int VerdadeiroFalsoPib = pib1 > pib2;
    int VerdadeiroFalsoPontosTuristicos = pontosturisticos1 > pontosturisticos2;
    int VerdadeiroFlasoDensidadePopulacional = (1/densidadepopulacional1) > (1/densidadepopulacional2);
    int VerdadeiroFalsoPibPerCapita = pibpercapita1 > pibpercapita2;
    int VeradeiroFalsoSuperPoder = superpoder1 > superpoder2;
   
    
    //Saida de dados imprimindo Carta "1" venceu ou Carta "2" venceu atravez da primeira variável, 
    //seguida de verdadeiro ou falso "(1)" ou "(0)"" atravez da segunda variável.
    printf("Comparação geral de Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", CartaGanhadorPopulacao, VerdadeiroFalsoPopulacao);
    printf("Area: Carta %d venceu (%d)\n", CartaGanhadorArea, VerdadeiroFalsoArea);
    printf("Pib: Carta %d venceu (%d)\n", CartaGanhadorPib, VerdadeiroFalsoPib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", CartaGanhadorPontosTuristicos, VerdadeiroFalsoPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", CartaGanhadorDensidade, VerdadeiroFlasoDensidadePopulacional);
    printf("Pib per Capita: %d venceu (%d)\n", CartaGanhadorPibPerCapita, VerdadeiroFalsoPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n\n", CartaGanhadorSuperPoder, VeradeiroFalsoSuperPoder);

    //Comparação com if e else e impressão dos resultados

    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s: %d habitantes\n",cidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n",cidade2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
    }
    
    printf("Comparação de cartas (Atributo: Área):\n\n");
    printf("Carta 1 - %s: %.2f km²\n",cidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n",cidade2, area2);
    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
    }

    printf("Comparação de cartas (Atributo: PIB):\n\n");
    printf("Carta 1 - %s: %.2f bilhoes de reais\n",cidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhoes de reais\n",cidade2, pib2);
    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
    }

    printf("Comparação de cartas (Atributo: Pontos túristicos):\n\n");
    printf("Carta 1 - %s: %d\n",cidade1, pontosturisticos1);
    printf("Carta 2 - %s: %d\n",cidade2, pontosturisticos2);
    if(pontosturisticos1 > pontosturisticos2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
    }

    printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");
    printf("Carta 1 - %s: %.3f hab/km²\n",cidade1, densidadepopulacional1);
    printf("Carta 2 - %s: %.3f hab/km²\n",cidade2, densidadepopulacional2);
    if(densidadepopulacional1 < densidadepopulacional2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
    }

    printf("Comparação de cartas (Atributo: Pib per capita):\n\n");
    printf("Carta 1 - %s: %.3f reais\n",cidade1, pibpercapita1);
    printf("Carta 2 - %s: %.3f reais\n",cidade2, pibpercapita2);
    if(pibpercapita1 > pibpercapita2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
    }

    printf("Comparação de cartas (Atributo: Super Poder):\n\n");
    printf("Carta 1 - %s: %.3f\n",cidade1, superpoder1);
    printf("Carta 2 - %s: %.3f\n",cidade2, superpoder2);
    if(superpoder1 > superpoder2){
        printf("Resultado: Carta 1 (%s) venceu!\n\n",cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n",cidade2);
    }

    return 0;
    }