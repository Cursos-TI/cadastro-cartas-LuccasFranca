#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[50], codigo1[5], cidade1[50];
  char estado2[50], codigo2[5], cidade2[50];
  int populacao1, turismo1;
  int populacao2, turismo2;
  float km1, pib1;
  float km2, pib2;

  // Área para entrada de dados
  printf("Bem-Vindo ao Super Trunfo! \n");
  printf("Cadastre a primeira carta! \n");

  printf("Digite o nome do Estado: \n");
  scanf(" %[^\n]", estado1);
  
  printf("Digite o codigo da carta 1: \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", cidade1);

  printf("Digite o numero aproximado da população: \n");
  scanf("%d", &populacao1);

  printf("Digite quantos Km aproximadamente tem a cidade: \n");
  scanf("%f", &km1);

  printf("Digite quantos pontos turisticos a cidade tem: \n");
  scanf("%d", &turismo1);

  printf("Digite o PIB aproximado da cidade: \n");
  scanf("%f", &pib1);

  printf("Cadastre a segunda carta! \n");

  printf("Digite o nome do Estado: \n");
  scanf(" %[^\n]", estado2);

  printf("Digite o código da carta 2: \n");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", cidade2);

  printf("Digite o numero aproximado da popula;áo: \n");
  scanf("%f", &populacao2);

  printf("Digite quantos Km aproximadamente tem a cidade: \n");
  scanf("%f", &km2);

  printf("Digite quantos pontos turisticos a cidade tem: \n");
  scanf("%d", &turismo2);

  printf("Digite o PIB aproximado da cidade: \n");
  scanf("%f", pib2);

  // Área para exibição dos dados da cidade
  printf("CARTA 1\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo da Carta 1: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Km: %f\n", km1);
  printf("Pontos turisticos: %d\n", turismo1);
  printf("PIB: R$%f Bilhoes\n", pib1);

  printf("CARTA 2\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo da Carta 2: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Km: %f\n", km2);
  printf("Pontos turisticos: %d\n", turismo2);
  printf("PIB: R$%f Bilhoes\n", pib2);

  
return 0;
} 
