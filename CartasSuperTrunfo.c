#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50];
  char codigo[5];   // Ex: "A01"
  char cidade[50];
  int populacao, turismo;
  float km, pib;

  // Área para entrada de dados
  printf("Bem-Vindo ao Super Trunfo! \n");

  printf("Digite o nome do Estado: \n");
  scanf(" %[^\n]", estado);
  
  printf("Digite o codigo da carta: \n");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", cidade);

  printf("Digite o numero aproximado da população: \n");
  scanf("%d", &populacao);

  printf("Digite quantos Km aproximadamente tem a cidade: \n");
  scanf("%f", &km);

  printf("Digite quantos pontos turisticos a cidade tem: \n");
  scanf("%d", &turismo);

  printf("Digite o PIB aproximado da cidade: \n");
  scanf("%f", &pib);
  
  // Área para exibição dos dados da cidade
  printf("DADOS DA CIDADE\n");
  printf("Estado: %s\n", estado);
  printf("Codigo da Carta: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Km: %f\n", km);
  printf("Pontos turisticos: %d\n", turismo);
  printf("PIB: R$%f Bilhoes\n", pib);

  
return 0;
} 
