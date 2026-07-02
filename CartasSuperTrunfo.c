#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int n_carta;
  char estado;
  char nome[20];
  int pop;
  float area;
  float pib;
  int pontos_turisticos;

  // Área para entrada de dados
  printf("-------------------------\n CADASTRO DAS CIDADES\n -------------------------\n");
  printf("Digite o estado da sua carta (letra de A a H): \n");
  scanf("%c", &estado);
  printf("Digite o numero da carta (de 1 a 4): \n");
  scanf("%d", &n_carta);  
  printf("Digite o nome da carta sem espaços ex: Rio-de-Janeiro.: \n");
  scanf("%s", &nome);
  printf("Digite a população da sua carta: \n");
  scanf("%d", &pop);
  printf("Digite a area em m2 da sua carta: \n");
  scanf("%f", &area);
  printf("Digite o PIB da carta: \n");
  scanf("%f", &pib);
  printf("Digite quantos pontos turisticos tem a carta: \n");
  scanf("%d", &pontos_turisticos);
  printf("-------------------------\n Obrigado!\n -------------------------\n");

  // Área para exibição dos dados da cidade
  printf("-------------------------\nCarta No%d\n -------------------------\n", n_carta);
  printf("Estado: %c\n", estado);
  printf("Codigo: %c%d\n", estado, n_carta);
  printf("Nome da Cidade: %s\n", nome);
  printf("Populacao: %d\n", pop);
  printf("Area: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Numero de pontos turisticos: %d\n", pontos_turisticos);


  printf("-------------------------\n CADASTRO DAS CIDADES\n -------------------------\n");
  printf("Digite o estado da sua carta (letra de A a H): \n");
  scanf("%c", &estado);
  printf("Digite o numero da carta (de 1 a 4): \n");
  scanf("%d", &n_carta);  
  printf("Digite o nome da carta sem espaços ex: Rio-de-Janeiro.: \n");
  scanf("%s", &nome);
  printf("Digite a população da sua carta: \n");
  scanf("%d", &pop);
  printf("Digite a area em m2 da sua carta: \n");
  scanf("%f", &area);
  printf("Digite o PIB da carta: \n");
  scanf("%f", &pib);
  printf("Digite quantos pontos turisticos tem a carta: \n");
  scanf("%d", &pontos_turisticos);
  printf("-------------------------\n Obrigado!\n -------------------------\n");

  // Área para exibição dos dados da cidade
  printf("-------------------------\nCarta No%d\n -------------------------\n", n_carta);
  printf("Estado: %c\n", estado);
  printf("Codigo: %c%d\n", estado, n_carta);
  printf("Nome da Cidade: %s\n", nome);
  printf("Populacao: %d\n", pop);
  printf("Area: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Numero de pontos turisticos: %d\n", pontos_turisticos);

  return 0;
} 
