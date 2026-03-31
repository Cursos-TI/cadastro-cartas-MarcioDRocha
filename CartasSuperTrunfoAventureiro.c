#include<stdio.h>

            //CARTA1//

    int main(){
        int turisticos; 
        float populacao;
        float areaKM2;
        float densidade_poulacional;
        float PIB;
        float PIB_percapita;
        char carta1[50], codigo[50], cidade[50], estado[50];


     printf("Digite o Código da carta 1:");
     scanf("%s", carta1);
     printf("O código da carta é: %s\n", carta1);

     printf("Digite o nome do estado:");
     scanf("%s", estado);
     printf("O nome do estado é: %s\n", estado);

     printf("Digite o nome da cidade:");
     scanf("%s", cidade);
     printf("O nome da cidade é: %s\n", cidade);

     printf("Digite a área do estado:");
     scanf("%f", &areaKM2);
     printf("A área da cidade é: %.2f\n", areaKM2);

     printf("Digite o PIB:");
     scanf("%f", &PIB);
     printf("O PIB é: %.2f\n", PIB);

     printf("Digite a população:");
     scanf("%f", &populacao);
     printf("A população é: %.2f\n", populacao);

     // Cálculo adcional

     densidade_poulacional = populacao / areaKM2;
     PIB_percapita = PIB / populacao;

     printf("A densidade populacional é: %.2f\n", densidade_poulacional);
     printf("O PIB per capita é: %.2f\n", PIB_percapita);
     
     printf("Digite Pontos turísticos:");
     scanf("%d", &turisticos);
     printf("A quantidade de pontos turísricos é: %d\n", turisticos);


                    //carta2//

        int turisticos2;
        float populacao2;
        float areakm2_2;
        float densidade_populacional2;
        float PIB2;
        float PIB_percapita2;
        char carta2[50], codigo2[50], cidade2[50], estado2[50];

     
     printf("Digite o Código da carta 2:");
     scanf("%s", carta2);
     printf("O código da carta é: %s\n", carta2);

     printf("Digite o nome do estado:");
     scanf("%s", estado2);
     printf("O nome do estado é: %s\n", estado2);

     printf("Digite o nome da cidade:");
     scanf("%s", cidade2);
     printf("O nome da cidade é: %s\n", cidade2);

     printf("Digite a área do estado:");
     scanf("%f", &areakm2_2);
     printf("A área da cidade é: %.2f\n", areakm2_2);

     printf("Digite o PIB:");
     scanf("%f", &PIB2);
     printf("O PIB é: %.2f\n", PIB2);

     printf("Digite a população:");
     scanf("%f", &populacao2);
     printf("A população é: %.2f\n", populacao2);

     // Cálculo adcional

     densidade_populacional2 = populacao2 / areakm2_2;
     PIB_percapita2 = PIB2 / populacao2;

     printf("A densidade populacional é: %.2f\n", densidade_populacional2);
     printf("O PIB per capita é: %.2f\n", PIB_percapita2);
     

     printf("A densidade populacional é: %.2f\n", densidade_populacional2);
     printf("O PIB per capita é: %.2f\n", PIB_percapita2);

     printf("Digite Pontos turísticos:");
     scanf("%d", &turisticos2);
     printf("A quantidade de pontos turísricos é: %d\n", turisticos2);

     
     
     
     
     
     return 0;






    }