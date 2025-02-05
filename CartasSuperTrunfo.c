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

  int Codigocidade, Pontosturisticos;
  char nome[40];
  float Populacao;
  int area;
  float PIB;
  
  printf("digite o Codigo da Cidade: \n");
   scanf("%d", &Codigocidade);

  printf("digite o Nome da cidade: \n");
   scanf("%s", &nome);

  printf("digite a Populção da cidade: \n");
   scanf("%f", &Populacao);

   printf("digite a area em Metros quadrados da cidade: \n");
   scanf("%d", &area);

   printf("digite o PIB da cidade: \n");
   scanf("%f", &PIB);

 printf("digite o numero de pontos turisticos: \n");
   scanf("%d", &Pontosturisticos);


   printf(" Codigo da Cidade: %d\n  Nome da Cidade: %s \n  População da cidade: %f\n ", Codigocidade,nome,Populacao);
   printf(" Area da cidade em Metros quadrados: %d \n  PIB da cidade: %f \n ", area, PIB);
   printf("Pontos Turisticos da cidade: %d \n ", Pontosturisticos);


    return 0;
}
