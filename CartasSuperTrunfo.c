#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Carta 1\n");

    char estado1 [50];
    char codigo1 [10];
    char cidade1 [50];
    int populacao1;
    float area1;
    float PIB1;
    int turisticos1; 
    float densidade1;
    float PIBpercapita1;
    float Superpoder1;

    
    printf("Digite o nome do estado - uma letra de 'A' a 'H':");
    scanf("%s", estado1);

    printf("Digite o código da carta - a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade:"),
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados:");
    scanf ("%f", &area1);

    printf("Digite o PIB da cidade em bilhões de reais:");
    scanf ("%f", &PIB1);

    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%d", &turisticos1);

    densidade1 = (float) populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;  
    Superpoder1 = (float) populacao1 + area1 + PIB1 + turisticos1 + (1/densidade1) + PIBpercapita1;


    printf("Carta 2\n");

    char estado2 [50];
    char codigo2 [10];
    char cidade2 [50];
    int populacao2;
    float area2;
    float PIB2;
    int turisticos2; 
    float densidade2;
    float PIBpercapita2;
    float Superpoder2;



    printf("Digite o nome do estado - uma letra de 'A' a 'H':");
    scanf("%s", estado2);

    printf("Digite o código da carta - a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade:"),
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:");
    scanf ("%f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais:");
    scanf ("%f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%d", &turisticos2);
    
    densidade2 = (float) populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;      
    Superpoder2 = (float) populacao2 + area2 + PIB2 + turisticos2 + (1/densidade2) + PIBpercapita2;


    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turisticos: %d\n",turisticos1);
    printf("Densidade demográfica: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f mil reais\n", PIBpercapita1);
    printf("Superpoder: %.2f\n", Superpoder1);


    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turisticos: %d\n",turisticos2);
    printf("Densidade demográfica: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f mil reais\n", PIBpercapita2);
    printf("Superpoder: %.2f\n", Superpoder2);

    //Comparação das cartas 1 e 2

    
   
    return 0;
}
