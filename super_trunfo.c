#include <stdio.h>

/*
    Cadastro de cartas super trunfo: Países

    Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
    Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    Nome da Cidade: O nome da cidade.
    População: O número de habitantes da cidade. 
    Área (em km²): A área da cidade em quilômetros quadrados. 
    PIB: O Produto Interno Bruto da cidade. 
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. 
    Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional.
    PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita

*/

int main(){

// - Cadastro de variáveis das duas cartas.

    //Variáveis carta 1
    char estado1, codigo1[04], cidade1[20];
    int populacao1, ponto_turistico1;
    float densidade_populacional1, pib_capita1, area1, pib1; 
    long double super_poder1;
    
    //Variáveis carta 2
    char estado2, codigo2[04], cidade2[20];
    int populacao2, ponto_turistico2;
    float densidade_populacional2, pib_capita2, area2, pib2; 
    long double super_poder2;

    // variaveis para realizar a comparacao
    int compara_populacao, compara_ponto_turistico;
    float compara_dens_populacional, compara_pib_perCapita, compara_area, compara_pib;
    long double compara_superPoder;
    
// - Enserir dados / cadastar as cartas.

//Cadastro carta 1
    printf("Cadastro carta 1:\n");

    printf("Insira a letra do estado: \n");
    scanf(" %c", &estado1);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Insira a população: \n");
    scanf("%d", &populacao1);

    printf("Insira a area em km² da cidade: \n");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &ponto_turistico1);
    

    densidade_populacional1 = populacao1 / area1;
    pib_capita1 = pib1 / populacao1;

    //Cadastro carta 2
    printf("\nCadastro carta 2:\n");

    printf("Insira a letra do estado: \n");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Insira a população: \n");
    scanf("%d", &populacao2);

    printf("Insira a área em Km² da cidade: \n");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &ponto_turistico2);

    densidade_populacional2 = populacao2 / area2;
    pib_capita2 = pib2 / populacao2;

// - calcular super poder das duas cartas.

    // super poder carta 1.
    super_poder1 = (float)populacao1 + (float)ponto_turistico1 + (1 / densidade_populacional1) + pib1 + area1 + pib_capita1;

    // super poder carta 2.
    super_poder2 = (float)populacao2 + (float)ponto_turistico2 + (1 / densidade_populacional2) + pib2+ area2 + pib_capita2;


// - Imprimir na tela os dados das cartas.

     //Imprimindo dados carta 1 
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais.\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais \n", pib_capita1);
    printf("Super Poder: %.2Lf\n", super_poder1);

    //Imprimindo dados carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2 );
    printf("PIB: %.2f Bilhões de Reais.\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais \n", pib_capita2);
    printf("Super Poder: %.2Lf\n", super_poder2);

//-COMPARAR CARTA POR CARTA PARA VER QUEM GANHOU 
    printf("****************************************************************\n");
    printf("\n\nComparacao das cartas: Atributo(Populacao)\n");

    int contaPonto_carta1 = 0, contaPonto_carta2 = 0;
   
    //POPULACAO
    if (populacao1 > populacao2){

        printf("Carta 1: %s : %d\n", cidade1, populacao1);
        printf("Carta 2: %s : %d\n", cidade2, populacao2);
        printf("Carta 1 (%s) venceu.\n", cidade1);

        contaPonto_carta1++;
        
    }else{

        printf("Carta 1: %s : %d\n", cidade1, populacao1);
        printf("Carta 2: %s : %d\n", cidade2, populacao2);
        printf("Carta 2 (%s) venceu.\n", cidade2);

        contaPonto_carta2++;

    }

    //Pontos turisticos
    printf("\n\nComparacao das cartas: Atributo(Ponto Turistico)\n");

    if (ponto_turistico1 > ponto_turistico2){

        printf("Carta 1: %s : %d\n", cidade1, ponto_turistico1);
        printf("Carta 2: %s : %d\n", cidade2, ponto_turistico2);
        printf("Carta 1 (%s) venceu.\n", cidade1);

        contaPonto_carta1++;

    }else{

        printf("Carta 1: %s : %d\n", cidade1, ponto_turistico1);
        printf("Carta 2: %s : %d\n", cidade2, ponto_turistico2);
        printf("Carta 2 (%s) venceu.\n", cidade2);

        contaPonto_carta2++;

    }

    //PIB
    printf("\n\nComparacao das cartas: Atributo(PIB)\n");

        if (pib1 > pib2){

        printf("Carta 1: %s : %.2f\n", cidade1, pib1);
        printf("Carta 2: %s : %.2f\n", cidade2, pib2);
        printf("Carta 1 (%s) venceu.\n", cidade1);

        contaPonto_carta1++;

    }else{

        printf("Carta 1: %s : %.2f\n", cidade1, pib1);
        printf("Carta 2: %s : %.2f\n", cidade2, pib2);
        printf("Carta 2 (%s) venceu.\n", cidade2);

        contaPonto_carta2++;

    }

    // contabiliza os pontos de atributo por atributo
    printf("\n\n****************************************************************\n");
    printf("Carta 1 - (%s): %d pontos.\n", cidade1, contaPonto_carta1);
    printf("Carta 2 - (%s): %d pontos.\n", cidade2, contaPonto_carta2);

    


    return 0;
}