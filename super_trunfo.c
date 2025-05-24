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


*/

int main(){
// 1°- Cadastro de variáveis das duas cartas.

    //Variáveis carta 1
    char estado1, codigo1[03], cidade1[15];
    int populacao1, ponto_turistico1;
    float area1, pib1; 
    
    //Variáveis carta 2
    char estado2, codigo2[03], cidade2[15];
    int populacao2, ponto_turistico2;
    float area2, pib2; 
    
// 2°- Enserir dados / cadastar as cartas.

    // Cadastro carta 1
    printf("Cadastro carta 1:\n");

    printf("Insira a letra do estado: \n");
    scanf("%c", &estado1);

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

    // Cadastro carta 2
    printf("Cadastro carta 2:\n");

    printf("Insira a letra do estado: \n");
    scanf("%c", &estado2);

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


// 3°- Imprimir na tela os dados das cartas.

    //Imprimindo dados carta 1 
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais.\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", ponto_turistico1);

    //Imprimindo dados carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2 );
    printf("PIB: %.2f Bilhõs de Reais.\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", ponto_turistico2);
    
    return 0;
}