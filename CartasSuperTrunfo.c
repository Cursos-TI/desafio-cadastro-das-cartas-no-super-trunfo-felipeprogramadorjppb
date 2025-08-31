#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    int pontosTuristicos;
    float pib;

    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    int pontosTuristicos2;
    float pib2;


    // Cadastro das Cartas:

    printf("====Carta 1====\n");

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo);

    printf("digite o nome da cidade:\n");
    scanf("%s", &nome);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (em km²):\n");
    scanf("%f", &area);




    printf("Digite o numero de pontos turisticos;\n");
    scanf("%d", &pontosTuristicos);

    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%f", &pib);

    printf("====Carta 2====\n");


    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo2);

    printf("digite o nome da cidade:\n");
    scanf("%s", &nome2);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km²):\n");
    scanf("%f", &area2);




    printf("Digite o numero de pontos turisticos;\n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%f", &pib2);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n=== Carta 1 ===\n");
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d mil\n", populacao);
    printf("Area: %.f km²\n",area);
    printf ("Pontos turisticos: %d\n", pontosTuristicos);
    printf("PIB: %.f bilhões\n", pib);


    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d mil\n", populacao2);
    printf("Area: %.f km²\n",area2);
    printf ("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("PIB: %.f bilhões\n", pib2);

    return 0;
}
