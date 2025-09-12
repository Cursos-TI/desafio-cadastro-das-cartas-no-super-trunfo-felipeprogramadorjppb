#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int divisao, divisao2;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char codigo[10]; // B14
    char nome[50]; // PATOS
    int populacao; // 103
    float area; // 513
    int pontosTuristicos; // 10
    float pib, superpoder; // PIB 109
    float rendapercapita;
    float densidadepopulacional;

    char codigo2[10]; // C14
    char nome2[50]; // CABEDELO
    int populacao2; // 66
    float area2; // 33
    int pontosTuristicos2; // 15
    float pib2, superpoder2; // PIB 3
    float rendapercapita2;
    float densidadepopulacional2;


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

    densidadepopulacional = populacao / area;
    printf("Densidade populacional (hab/km²):%.2f\n", densidadepopulacional);

    rendapercapita = pib / populacao;
    printf("Renda per capita (Reais):%.2f\n", rendapercapita);

    superpoder = (float)populacao + area + pib + pontosTuristicos + rendapercapita + densidadepopulacional;
    printf("Super poder:%.2f\n", superpoder);

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

    densidadepopulacional2 = populacao2 / area2;
    printf("Densidade populacional (hab/km²):%.2f\n", densidadepopulacional2);

    rendapercapita2 = pib2 / populacao2;
    printf("Renda per capita (Reais):%.2f\n", rendapercapita2);

    superpoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + rendapercapita2 + densidadepopulacional2;
    printf("Super poder:%.2f\n", superpoder2);



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
    printf("Densidade populacional (hab/km²):%.2f\n", densidadepopulacional);
    printf("Renda per capita (Reais):%.2f\n", rendapercapita);
    printf("Super poder:%.2f\n", superpoder);


    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d mil\n", populacao2);
    printf("Area: %.f km²\n",area2);
    printf ("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("PIB: %.f bilhões\n", pib2);
    printf("Densidade populacional (hab/km²):%.2f\n", densidadepopulacional2);
    printf("Renda per capita (Reais):%.2f\n", rendapercapita2);
    printf("Super poder:%.2f\n", superpoder);

    printf("\n=== Comparações ===\n");

    printf("População: %s venceu\n", (populacao > populacao2) ? "Carta 1" : "Carta 2");
    printf("Área: %s venceu\n", (area > area2) ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu\n", (pib > pib2) ? "Carta 1" : "Carta 2");
    printf("Pontos turísticos: %s venceu\n", (pontosTuristicos > pontosTuristicos2) ? "Carta 1" : "Carta 2");
    printf("PIB per capita: %s venceu\n", (rendapercapita> rendapercapita2) ? "Carta 1" : "Carta 2");
    printf("Densidade populacional: %s venceu\n", (densidadepopulacional < densidadepopulacional2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu\n", (superpoder > superpoder2) ? "Carta 1" : "Carta 2");

    printf("Atributo escolhido: População\n");

    if (populacao > populacao2) {
        printf("Carta 1: Patos venceu!\n");
    } else {
        printf("carta 2: Cabedelo venceu!\n");
    }
    printf("Atributo escolhido: Densidade populacional\n");

    if(densidadepopulacional < densidadepopulacional2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }
        

    return 0;
}
