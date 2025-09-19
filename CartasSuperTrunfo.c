#include<stdio.h>

int main (){

    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;     // Primeiro declaramos as variaveis necessarias para fazer as duas cartas do super trunfo
    int turistico1, turistico2; 
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;  
    float pibcapita1, pibcapita2;

    // Damos um olá ao usuario que vai interragir com o programa
    printf("--Olá!, Vamos cadastrar duas cartas de super trunfo!--\n");
    printf("Vamos a primeira carta!\n");

        // a partir daqui vamos coletar as informações do usuario
        printf("Digite a letra do Estado de 'A' a 'H':\n");
        scanf(" %c", &estado1);

        printf("Digite o codigo da cidade sendo um numero de 01 a 04: \n");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade1);

        printf("Qual a População: \n");
        scanf("%d", &populacao1);
        getchar();

        printf("Qual a Área em Km²: \n");
        scanf("%f", &area1);

        printf("O PIB da Cidade: \n");
        scanf("%f", &pib1);

        printf("Por fim o numero de pontos turisticos: \n");
        scanf("%d", &turistico1);

        //Com os dados coletados faz a soma da densidade e do pibpercapita
        densidade1 = (float) populacao1 / area1;
        pibcapita1 = pib1 / (float) populacao1;

    // Informamos o usuario que a primeira parte esta acabada
    printf("--Muito bem a primeira carta ja esta registrada!--\n");
    printf("Agora Vamos a segunda carta!\n");

        // E damos inicio a coleta das informações da segunda carta
        printf("Digite a letra do Estado de 'A' a 'H':\n");
        scanf(" %c", &estado2);

        printf("Digite o codigo da cidade sendo um numero de 01 a 04: \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);

        printf("Qual a População: \n");
        scanf("%d", &populacao2);

        printf("Qual a Área em Km²: \n");
        scanf("%f", &area2);

        printf("O PIB da Cidade: \n");
        scanf("%f", &pib2);

        printf("Por fim o numero de pontos turisticos: \n");
        scanf("%d", &turistico2);

        //Com os dados coletados faz a soma da densidade e do pibpercapita
        densidade2 = (float) populacao2 / area2;
        pibcapita2 =  pib2 / (float) populacao2;

    // Aqui Apresentaremos ao usuario as informações coletadas de uma forma organizada
    printf("--Agora vamos a apresentação das cartas!--\n");
    printf("Carta de Numero 01 \n");

        printf("Estado: %c \n", estado1);
        printf("Código: %c%s \n", estado1, codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("População: %d \n", populacao1);
        printf("Área: %.2fKm² \n", area1);
        printf("PIB: %.2f \n", pib1);
        printf("Pontos Turísticos: %d \n", turistico1);
        printf("Densidade populacional: %.2f\n", densidade1);
        printf("PIB per capita: %.2f\n", pibcapita1);

    printf("Carta de Numero 02 \n");

        printf("Estado: %c \n", estado2);
        printf("Código: %c%s \n", estado2, codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %.2fKm² \n", area2);
        printf("PIB: %.2f \n", pib2);
        printf("Pontos Turísticos: %d\n", turistico2);
        printf("Densidade populacional: %.2f\n", densidade2);
        printf("PIB per capita: %.2f", pibcapita2);

    return 0;
}