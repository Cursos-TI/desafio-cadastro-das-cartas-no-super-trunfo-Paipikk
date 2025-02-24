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

  // -----------------------------------Definição das variáveis------------------------------------------
  char estado1[30], estado2[30];
  char codigoCarta1[10], codigoCarta2[10];
  char nomeCidade1[40], nomeCidade2[40];
  int populacao1, populacao2;
  float area1, area2;
  float PIB1, PIB2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidade1, densidade2;
  float PIBpercapita1, PIBpercapita2;
--
  // ------------------------------------Entrada de dados da Carta 1--------------------
  printf("Digite o Estado da Cidade 1: ");
  scanf("%s", estado1);

  printf("Digite o Código da Carta 1: ");
  scanf("%s", codigoCarta1);

  printf("Digite o Nome da Cidade 1: ");
  scanf("%s", nomeCidade1);

  printf("Digite a População da Cidade 1: ");
  scanf("%d", &populacao1);

  printf("Digite a Área da Cidade 1 (km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB da Cidade 1: ");
  scanf("%f", &PIB1);

  printf("Digite o Número de Pontos Turísticos da Cidade 1: ");
  scanf("%d", &pontosTuristicos1);

  // ---------------------------------------------Entrada de dados da Carta 2------------------------------
  printf("\nDigite o Estado da Cidade 2: ");
  scanf("%s", estado2);

  printf("Digite o Código da Carta 2: ");
  scanf("%s", codigoCarta2);

  printf("Digite o Nome da Cidade 2: ");
  scanf("%s", nomeCidade2);

  printf("Digite a População da Cidade 2: ");
  scanf("%d", &populacao2);

  printf("Digite a Área da Cidade 2 (km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB da Cidade 2: ");
  scanf("%f", &PIB2);

  printf("Digite o Número de Pontos Turísticos da Cidade 2: ");
  scanf("%d", &pontosTuristicos2);

  // ------------------------------------Cálculo dos indicadores------------------------
  densidade1 = populacao1 / area1;
  PIBpercapita1 = PIB1 / populacao1;
  densidade2 = populacao2 / area2;
  PIBpercapita2 = PIB2 / populacao2;

  // ------------------------------------------------------Definição do atributo a ser comparado (escolhido manualmente)-----------------------------------------------
  char atributo[] = "População";
  int valor1 = populacao1;
  int valor2 = populacao2;

  printf("\n=== Comparação de Cartas ===\n");
  printf("Atributo Comparado: %s\n", atributo);
  printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, valor1);
  printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, valor2);

  // Determinação da carta vencedora
  if (valor1 > valor2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
  } else if (valor1 < valor2) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
  } else {
      printf("Resultado: Empate! Ambas as cidades possuem o mesmo valor para o atributo comparado.\n");
  }



    return 0;
}
