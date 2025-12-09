#include <stdio.h>
int main(){

    /*Lista de variáveis*/
    //Variáveis da carta 01
    char estado01[5];
    char codigo01[5];
    char cidade01[30];
    int populacao01;
    int area01;
    int pib01;
    int pontos_turisticos01;

    //Variáveis da carta 02
    char estado02[5];
    char codigo02[5];
    char cidade02[30];
    int populacao02;
    int area02;
    int pib02;
    int pontos_turisticos02;

    /*Inicialização do programa*/

    printf("Bem-vindo ao Super Trunfo de Países!!\n\n");
    printf("Para começar, te ajudaremos a construir seu baralho.\nPor favor, siga as instruções: \n\n");
    



    /*Coleta de dados das cartas*/


    //Coleta de dados carta Nº01:
    
    printf("\n\nCarta Nº01\n");
    
    printf("Digite uma letra de A à H para determinar o estado da carta: \n");
    scanf ("%s", &estado01);

    printf("Digite a letra escolhida anteriormente junto de um número de 01 a 04 para determinar o código da carta(Ex: A01): \n");
    scanf("%s", &codigo01);

    printf("Digite o nome da cidade representada na carta: \n");
    scanf("%s", &cidade01);

    printf("Digite, em números, a população da cidade escolhida: \n");
    scanf("%d", &populacao01);

    printf("Digite, em números, a área em kilômetros quadrados da cidade escolhida: \n");
    scanf("%d", &area01);

    printf("Digite, em números, o PIB da cidade escolhida: \n");
    scanf("%d", &pib01);
    
    printf("Digite, em números, quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos_turisticos01);



    //Coleta de dados carta Nº02:
    
    printf("\n\nCarta Nº02\n");
    
    printf("Digite uma letra de A à H para determinar o estado da carta: \n");
    scanf ("%s", &estado02);

    printf("Digite a letra escolhida anteriormente junto de um número de 01 a 04 para determinar o código da carta(Ex: A01): ");
    scanf("%s", &codigo02);

    printf("Digite o nome da cidade representada na carta: \n");
    scanf("%s", &cidade02);

    printf("Digite, em números, a população da cidade escolhida: \n");
    scanf("%d", &populacao02);

    printf("Digite, em números, a área em km² da cidade escolhida: \n");
    scanf("%d", &area02);

    printf("Digite, em números, o PIB em R$ da cidade escolhida: \n");
    scanf("%d", &pib02);

    printf("Digite, em números, quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos_turisticos02);

    

    /*Demonstrar os Resultados*/
    printf("\n\n Resultados: \n\n");
    

    //Resultados Carta Nº01

    printf("Carta Nº01: \n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d habitantes.\n", populacao01);
    printf("Km²: %d\n", area01);
    printf("PIB anual: R$%d,00\n", pib01);
    printf("Pontos turísticos: %d\n", pontos_turisticos01);
    
    
    //Resultados Carta Nº02

    printf("\n\nCarta Nº02: \n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %d\n", populacao02);
    printf("Km²: %d\n", area02);
    printf("PIB anual: R$%d,00\n", pib02);
    printf("Pontos turísticos: %d\n", pontos_turisticos02);

    
    return 0;

}