#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;     // Primeiro declaramos as variaveis necessarias para fazer as duas cartas do super trunfo
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    // Damos um olá ao usuario que vai interragir com o programa
    printf("--Olá!, Vamos cadastrar duas cartas de super trunfo!--\n");
    printf("Vamos a primeira carta!\n");

        // a partir daqui vamos coletar as informações do usuario
        printf("Digite a letra do Estado de 'A' a 'H':\n");
        scanf("%c", &estado1);
        getchar(); // Utilizando o getchar pra limpar o \n apos a leitura do scanf

        printf("Digite o codigo da cidade sendo um numero de 01 a 04: \n");
        scanf("%s", codigo1);
        getchar();

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade1);
        getchar();

        printf("Qual a População: \n");
        scanf("%d", &populacao1);
        getchar();

        printf("Qual a Área em Km²: \n");
        scanf("%f", &area1);
        getchar();

        printf("O PIB da Cidade: \n");
        scanf("%f", &pib1);
        getchar();

        printf("Por fim o numero de pontos turisticos: \n");
        scanf("%d", &turistico1);
        getchar();

    // Informamos o usuario que a primeira parte esta acabada
    printf("--Muito bem a primeira carta ja esta registrada!--\n");
    printf("Agora Vamos a segunda carta!\n");

        // E damos inicio a coleta das informações da segunda carta
        printf("Digite a letra do Estado de 'A' a 'H':\n");
        scanf("%c", &estado2);
        getchar();

        printf("Digite o codigo da cidade sendo um numero de 01 a 04: \n");
        scanf("%s", codigo2);
        getchar();

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);
        getchar();

        printf("Qual a População: \n");
        scanf("%d", &populacao2);
        getchar();

        printf("Qual a Área em Km²: \n");
        scanf("%f", &area2);
        getchar();

        printf("O PIB da Cidade: \n");
        scanf("%f", &pib2);
        getchar();

        printf("Por fim o numero de pontos turisticos: \n");
        scanf("%d", &turistico2);
        getchar();

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

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
    

    printf("Carta de Numero 02 \n");

        printf("Estado: %c \n", estado2);
        printf("Código: %c%s \n", estado2, codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %.2fKm² \n", area2);
        printf("PIB: %.2f \n", pib2);
        printf("Pontos Turísticos: %d", turistico2);

    return 0;
}
