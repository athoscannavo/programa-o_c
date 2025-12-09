#include <stdio.h>
int main(){

    /*Lista de variáveis*/
    //Variáveis da carta 01
    char estado01[50];
    char codigo01[50];
    char cidade01[50];
    int populacao01;
    int area01;
    int pib01;
    int pontos_turisticos01;

    //Variáveis da carta 02
    char estado02[50];
    char codigo02[50];
    char cidade02[50];
    int populacao02;
    int area02;
    int pib02;
    int pontos_turisticos02;

    /*Inicialização do programa*/

    printf("Bem-vindo ao Super Trunfo de Países!!/n/n")
    printf("Para começar, te ajudaremos a construir seu baralho./n Por favor, siga as instruções:/n/n")
    



    /*Coleta de dados das cartas*/


    //Coleta de dados carta Nº01:
    
    printf("Carta Nº01/n")
    
    printf("Digite uma letra de A à H para determinar o estado da carta: /n")
    scanf ("%s", estado01)

    printf("Digite a letra escolhida anteriormente junto de um número de 01 a 04 para determinar o código da carta(Ex: A01): /n")
    scanf("%s", codigo01)

    printf("Digite o nome da cidade representada na carta: /n")
    scanf("%s", cidade01)

    print("Digite, em números, a população da cidade escolhida: /n")
    scanf("%f", populacao01)

    print("Digite, em números, a área em kilômetros quadrados da cidade escolhida: /n")
    scanf("%f", area01)

    print("Digite, em números, o PIB da cidade escolhida: /n")
    scanf("%f", pib01)
    
    print("Digite, em números, quantos pontos turísticos existem na cidade: /n")
    scanf("%d", pontos_turisticos01)



    //Coleta de dados carta Nº02:
    
    printf("Carta Nº02/n")
    
    printf("Digite uma letra de A à H para determinar o estado da carta: /n")
    scanf ("%s", estado02)

    printf("Digite a letra escolhida anteriormente junto de um número de 01 a 04 para determinar o código da carta(Ex: A01): /n")
    scanf("%s", codigo02)

    printf("Digite o nome da cidade representada na carta: /n")
    scanf("%s", cidade02)

    print("Digite, em números, a população da cidade escolhida: /n")
    scanf("%f", populacao02)

    print("Digite, em números, a área em km² da cidade escolhida: /n")
    scanf("%f", area02)

    print("Digite, em números, o PIB em R$ da cidade escolhida: /n")
    scanf("%f", pib02)
    
    print("Digite, em números, quantos pontos turísticos existem na cidade: /n")
    scanf("%d", pontos_turisticos02)



}