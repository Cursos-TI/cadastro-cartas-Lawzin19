#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
struct Carta {
  int n_carta;
  char estado;
  char nome[20];
  int pop;
  float area;
  float pib;
  int pontos_turisticos;
};


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  struct Carta carta1;
  struct Carta carta2;
  

  // Área para entrada de dados
  printf("-------------------------\n CADASTRO DE CARTA\n -------------------------\n");
  printf("Digite o estado da sua carta (letra de A a H): \n");
  scanf("%c", &carta1.estado);
  printf("Digite o numero da carta (de 1 a 4): \n");
  scanf("%d", &carta1.n_carta);  
  printf("Digite o nome da carta sem espaços ex: Rio-de-Janeiro.: \n");
  scanf("%s", &carta1.nome);
  printf("Digite a população da sua carta: \n");
  scanf("%d", &carta1.pop);
  printf("Digite a area em m2 da sua carta: \n");
  scanf("%f", &carta1.area);
  printf("Digite o PIB da carta: \n");
  scanf("%f", &carta1.pib);
  printf("Digite quantos pontos turisticos tem a carta: \n");
  scanf("%d", &carta1.pontos_turisticos);
  printf("-------------------------\n Obrigado!\n -------------------------\n");
  printf("-------------------------\n CADASTRO DE CARTA\n -------------------------\n");
  printf("Digite o estado da sua carta (letra de A a H): \n");
  scanf(" %c", &carta2.estado);
  printf("Digite o numero da carta (de 1 a 4): \n");
  scanf(" %d", &carta2.n_carta);  
  printf("Digite o nome da carta sem espaços ex: Rio-de-Janeiro.: \n");
  scanf("%s", &carta2.nome);
  printf("Digite a população da sua carta: \n");
  scanf("%d", &carta2.pop);
  printf("Digite a area em m2 da sua carta: \n");
  scanf("%f", &carta2.area);
  printf("Digite o PIB da carta: \n");
  scanf("%f", &carta2.pib);
  printf("Digite quantos pontos turisticos tem a carta: \n");
  scanf("%d", &carta2.pontos_turisticos);
  printf("-------------------------\n Obrigado!\n -------------------------\n");

  // Área para exibição dos dados da cidade
  printf("-------------------------\nCarta No%d\n -------------------------\n", carta1.n_carta);
  printf("Estado: %c\n", carta1.estado);
  printf("Codigo: %c%d\n", carta1.estado, carta1.n_carta);
  printf("Nome da Cidade: %s\n", carta1.nome);
  printf("Populacao: %d\n", carta1.pop);
  printf("Area: %.2f\n", carta1.area);
  printf("PIB: %.2f\n", carta1.pib);
  printf("Numero de pontos turisticos: %d\n", carta1.pontos_turisticos);

  printf("-------------------------\nCarta No%d\n -------------------------\n", carta2.n_carta);
  printf("Estado: %c\n", carta2.estado);
  printf("Codigo: %c%d\n", carta2.estado, carta2.n_carta);
  printf("Nome da Cidade: %s\n", carta2.nome);
  printf("Populacao: %d\n", carta2.pop);
  printf("Area: %.2f\n", carta2.area);
  printf("PIB: %.2f\n", carta2.pib);
  printf("Numero de pontos turisticos: %d\n", carta2.pontos_turisticos);


  return 0;
} 
