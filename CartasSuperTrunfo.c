#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // variaveis de texto
  char estado1[50], codigo1[6], cidade1[50];
  char estado2[50], codigo2[6], cidade2[50];
  // variaveis numericas
  unsigned long int populacao1, populacao2;
  int turismo1, turismo2;
  float km1, pib1, km2, pib2;
  float pibcap1, pibcap2, kmp1, kmp2;
  float super1, super2;

  // Área para entrada de dados
  printf("Bem-Vindo ao Super Trunfo! \n");
  printf("Cadastre a primeira carta! \n");

  printf("Digite o nome do Estado: \n");
  scanf(" %[^\n]", estado1);
  
  printf("Digite o código da carta 1: \n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", cidade1);

  printf("Digite o número aproximado da população: \n");
  scanf("%lu", &populacao1);

  printf("Digite quantos Km aproximadamente tem a cidade: \n");
  scanf("%f", &km1);

  printf("Digite quantos pontos turísticos a cidade tem: \n");
  scanf("%d", &turismo1);

  printf("Digite o PIB aproximado da cidade: \n");
  scanf("%f", &pib1);

  printf("\nCadastre a segunda carta!\n");

  printf("Digite o nome do Estado: \n");
  scanf(" %[^\n]", estado2);

  printf("Digite o código da carta 2: \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", cidade2);

  printf("Digite o número aproximado da população: \n");
  scanf("%lu", &populacao2);

  printf("Digite quantos Km aproximadamente tem a cidade: \n");
  scanf("%f", &km2);

  printf("Digite quantos pontos turísticos a cidade tem: \n");
  scanf("%d", &turismo2);

  printf("Digite o PIB aproximado da cidade: \n");
  scanf("%f", &pib2);

  // calculos
  kmp1 = (float)populacao1 / km1;
  kmp2 = (float)populacao2 / km2;
  pibcap1 = (float)populacao1 / pib1;
  pibcap2 = (float)populacao2 / pib2;
  super1 = (float)populacao1 + km1 + pib1 + turismo1 + pibcap1 + (1.0 / kmp1);
  super2 = (float)populacao2 + km2 + pib2 + turismo2 + pibcap2 + (1.0 / kmp2);


  // Área para exibição dos dados da cidade
  printf("\nCARTA 1\n");
  printf("Estado: %s\n", estado1);
  printf("Código da Carta 1: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Área: %.2f km² \n", km1);
  printf("Pontos turisticos: %d\n", turismo1);
  printf("PIB: R$%.2f Bilhões de reais\n", pib1);
  printf("Densidade Populacional: %.2f hab/km²\n", kmp1);
  printf("PIB per Cap: %.2f Reais\n", pibcap1);
  printf("Super Poder: %.2f\n", super1);

  printf("\nCARTA 2\n");
  printf("Estado: %s\n", estado2);
  printf("Código da Carta 2: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Área: %.2f km²\n", km2);
  printf("Pontos turisticos: %d\n", turismo2);
  printf("PIB: R$%.2f Bilhões de reais\n", pib2);
  printf("Densidade Populacional: %.2f hab/km²\n", kmp2);
  printf("PIB per Cap: %.2f Reais\n", pibcap2);
  printf("Super Poder: %.2f\n", super2);

  /* comparacoes 1
  printf("\n Comparações\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", km1 > km2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Túristicos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", kmp1 < kmp2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibcap1 > pibcap2);
  printf("Super Poder: Carta 1 vence (%d)\n", super1 > super2);
  */

 /* // Comparacoes de todos os atributos
  printf("\n======COMPARACAO DE ATRIBUTOS======\n");

  //populacao
  printf("\nAtributo: Populacao\n");
  if (populacao1 > populacao2){
    printf("Vencedora: Carta 1 (%s) com %lu habitantes\n", cidade1, populacao1);
  }else {
    printf("Vencedora: Carta 2 (%s) com %lu habitantes\n", cidade2, populacao2);
  }
  //KM
  printf("\nAtributo: KM\n");
  if (km1 > km2){
    printf("Vencedora: Carta 1 (%s) com %.2f km²\n", cidade1, km1); 
  }else {
    printf("Vencedora: Carta 2 (%s) com %2.f km²\n", cidade2, km2);
  }
  //PIB
  printf("\nAtributo: PIB\n");
  if (pib1 > pib2){
    printf("Vencedora: Carta 1 (%s) com R$ %.2f bilhoes", cidade1, pib1);
  }else {
    printf("Vencedora: Carta 2 (%s) com R$ %.2f bilhoes", cidade2, pib2);
  }
  //densidade populacional (menor vence)
  printf("\nAtributo: Densidade populacional\n");
  if (kmp1 < kmp2){
    printf("Vencedora: Carta 1 (%s) com %.2f hab/km² (menor é melhor)\n", cidade1, kmp1);
  }else {
    printf("Vencedora: Carta 2 (%s) com %.2f hab/km² (menor é melhor)\n", cidade2, kmp2);
  }
  //PIB per capita
  printf("\nAtributo: PIB per capita\n");
  if (pibcap1 > pibcap2){
    printf("Vencedora: Carta 1 (%s) com %.2f por haitante\n", cidade1, pibcap1);
  }else {
    printf("Vencedora: Carta 2 (%s) com %.2f por habitante\n", cidade2, pibcap2);
  }
  //pontos turisticos
  printf("\nAtributo: ponto turistico\n");
  if (turismo1 > turismo2){
    printf("Vencedora: Carta 1 (%s) com %d prontos turisticos\n", cidade1, turismo1);
  }else {
    printf("Vencedora: Carta 2 (%s) com %d pontos turisticos\n", cidade2, turismo2);
  }*/
  
  //menu interativo
  int opcao;
  printf("MENU DE COMPARACÁO\n");
  printf("Escolha o atributo para comparar\n");
  printf("1 - Populacäo\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos túristicos\n");
  printf("5 - Densidade demografica\n");
  printf("6 - PIB per capita\n");
  printf("Digite a opcao:\n");
  scanf("%d", &opcao);
  
  printf("Resultado\n");

  switch (opcao)
  {
  case 1:
      printf("Atributo: populacao\n");
      if (populacao1 > populacao2)
        printf("Vencedora: %s (%.lu habitantes)\n", cidade1, populacao1);
      else if (populacao2 > populacao1)
        printf("Vencedora: %s (%.lu habitantes)\n", cidade2, populacao2);
      else
        printf("Empate! Os atributos sáo iguais.\n");
    break;
  case 2:
      printf("Atributo: Área\n");
      if (km1 > km2)
        printf("Vencedora: %s (%.2f km²)\n", cidade1, km1);
      else if (km2 > km1)
        printf("Vencedora: %s (%.2f km²)\n", cidade2, km2);
      else
        printf("Empate! As áreas sáo iguais.\n");
    break;
  case 3:
      printf("Atributo: PIB\n");
      if (pib1 > pib2)
        printf("Vencedora: %s (R$ %.2f bi)\n", cidade1, pib1);
      else if (pib2 > pib1)
        printf("Vencedora: %s (R$ %.2f bi)\n", cidade2, pib2);
      else
        printf("Empate! os dois PIB sáo iguais\n");
    break;
  case 4:
      printf("Atributo: Pontos Túristicos\n");
      if (turismo1 > turismo2)
        printf("Vencedora: %s (%d pontos)\n", cidade1, turismo1);
      else if (turismo2 > turismo1)
        printf("Vencedora: %s (%d pontos)\n", cidade2, turismo2);
      else
        printf("Empate! Mesmo numero de pontos turisticos\n");
    break;
  case 5:
      printf("Atributo: Densidade Demográfica (menor vence)\n");
      if (kmp1 < kmp2)
        printf("Vencedora: %s (%.2f hab/km²)\n", cidade1, kmp1);
      else if (kmp2 < kmp1)
        printf("Vencedora: %s (%.2f hab/km²)\n", cidade2, kmp2);
      else
        printf("Empate! Densidade iguais\n");
    break;
  case 6:
      printf("Atributo: PIB per capita\n");
      if (pibcap1 > pibcap2)
        printf("Vencedora: %s (R$ %.2f por habitantes)\n", cidade1, pibcap1);
      else if (pibcap2 > pibcap1)
        printf("Vencedora: %s (%.2f por habitantes)\n", cidade2, pibcap2);
      else
        printf("Empate! Os atributos sáo iguais.\n");
    break;

  default:
      printf("Opcao invalida! Escolha um número de 1 a 6.\n");
    break;
  }
  
  
  
  printf("\nFim\n");
  
return 0;
} 
