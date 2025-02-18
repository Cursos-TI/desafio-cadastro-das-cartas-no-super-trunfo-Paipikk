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

  int Codigocidade1, Codigocidade2, Pontosturisticos1, Pontosturisticos2;
  char nome1[40], nome2[40];
  float Populacao1, Populacao2;
  float area1, area2;
  double PIB1, PIB2;
  float Densidade1, Densidade2;
  float PIBpercapita1, PIBpercapita2;

  // ------------------------cidade 1 entrada de dados-------------------------------
  printf("digite o Codigo da Cidade 1: \n");
   scanf("%d", &Codigocidade1);

   getchar();

  printf("digite o Nome da cidade 1: \n");
   scanf("%s", nome1);

  printf("digite a Populção da cidade 1: \n");
   scanf("%f", &Populacao1);

   printf("digite a area em KM quadrados da cidade 1: \n");
   scanf("%f", &area1);

   printf("digite o PIB da cidade 1: \n");
   scanf("%lf", &PIB1);

 printf("digite o numero de pontos turisticos 1: \n");
   scanf("%d", &Pontosturisticos1);

   Densidade1 = Populacao1 / area1;
   PIBpercapita1 = PIB1 / Populacao1;

  // ------------------------------------cidade 2 entrada de dados-----------------------------------------------------------------
  printf("digite o Codigo da Cidade 2: \n");
  scanf("%d", &Codigocidade2);

  getchar();

 printf("digite o Nome da cidade 2: \n");
  scanf("%s", nome2);

 printf("digite a Populção da cidade 2: \n");
  scanf("%f", &Populacao2);

  printf("digite a area em KM quadrados da cidade 2: \n");
  scanf("%f", &area2);

  printf("digite o PIB da cidade 2: \n");
  scanf("%lf", &PIB2);

printf("digite o numero de pontos turisticos 2: \n");
  scanf("%d", &Pontosturisticos2);

  Densidade2 = Populacao2 / area2;
   PIBpercapita2 = PIB2 / Populacao2;


   // --------------------------------------SAIDA DE DADOS--------------------------------------------

   printf("\n=== Comparação das Cidades ===\n");
  //printf(": %d\n", Codigocidade1);
   //printf("Nome da Cidade: %s\n", nome1);
   printf("População da Cidade venceu: %.3f\n", Populacao1 > Populacao2);
   printf("Área da Cidade (km²) venceu : %.3f\n", area1 > area2);
   printf("PIB da Cidade venceu: %.2lf\n", PIB1 > PIB2);
   printf("Pontos Turísticos venceu: %d\n", Pontosturisticos1 > Pontosturisticos2);
   printf("Densidade Demográfica venceu: %.3f hab/km²\n", Densidade1 > Densidade2);
   printf("O PIB per capita atual da cidade venceu: %.3f \n", PIBpercapita1 > PIBpercapita2);



    return 0;
}
