#include <stdio.h>

// funcao para obter valor de um atributo
float getValor(int atributo, int carta,
                unsigned long int pop1, unsigned long int pop2,
                float km1, float km2,
                float pib1, float pib2,
                int tur1, int tur2,
                float kmp1, float kmp2,
                float pibcap1, float pibcap2)

  {
    if (atributo == 1) return carta == 1 ? pop1 : pop2;
    if (atributo == 2) return carta == 1 ? km1 : km2;
    if (atributo == 3) return carta == 1 ? pib1 : pib2;
    if (atributo == 4) return carta == 1 ? tur1 : tur2;
    if (atributo == 5) return carta == 1 ? kmp1 : kmp2;
    if (atributo == 6) return carta == 1 ? pibcap1 : pibcap2;

    return 0;
  }

  int main () {
    //dados da carta 1
    char estado1[50], codigo1[6], cidade1[50];
    char estado2[50], codigo2[6], cidade2[50];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2;
    float km1, pib1, km2, pib2;
    float pibcap1, pibcap2, kmp1, kmp2;

    //estrada da carta 1
    printf("===super trunfo===\nCadastro da primeira carta\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &km1);

    printf("Pontos Túristicos: ");
    scanf("%d", &turismo1);

    printf("PIB (bi): ");
    scanf("%f", &pib1);

    //entrada da segunda carta
    printf("Cadastro da segunda carta\n");

    printf("Estado:");
    scanf(" %[^\n]", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Área (km): ");
    scanf("%f", &km2);

    printf("Pontos Túristicos: ");
    scanf("%d", &turismo2);

    printf("PIB (bi): ");
    scanf("%f", &pib2);
    
    //calculos
    kmp1 = populacao1 / km1;
    kmp2 = populacao2 / km2;

    pibcap1 = pib1 / populacao1;
    pibcap2 = pib2 / populacao2;

    // ===================
    // MENU DE COMPARACAO
    // ===================

    int op1, op2;

    printf("MENU DE ATRIBUTOS\n");
    printf("1 - Populacao\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Túristicos\n");
    printf("5 - Densidade demográfica (menor vence)\n");
    printf("6 - PIB per capita\n");

    //escolha do primeiro atributo
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &op1);

    if (op1 > 1 || op1 > 6){
      printf("opcao invalida!\n");
    }

    //escolha do segundo atributo
    printf("Escolha o segundo atributo(diferente do primeiro):\n");

    switch (op1)
    {
    case 1:
      printf("2 - Area\n3 - PIB\n4 - Pontos turistico\n5 - Densidade demografica\n6 - PIB per capita\n");
      break;
    case 2:
      printf("1 - Populacao\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade demografica\n6 - PIB per capita\n");
      break;
    case 3:
      printf("1 -Populacao\n2 - Area\n4 - Pontos turisticos\n5 - Densidade demografica\n6 - PIB per capita\n");
      break;
    case 4:
      printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade demográfica\n6 - PIB per capita\n");
      break;
    case 5:
      printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n6 - PIB per capita\n");
      break;
    case 6:
      printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
      break;
    }

    printf("->");
    scanf("%d", &op2);

    if (op2 < 1 || op2 > 6 || op2 == op1){
      printf("Opcao invalida!");
      return 0;
    }

    //pegando valores dos atributos
    float v1a = getValor(op1, 1, populacao1, populacao2, km1, km2, pib1, pib2, turismo1, turismo2, kmp1, kmp2, pibcap1, pibcap2);
    float v1b = getValor(op1, 1, populacao1, populacao2, km1, km2, pib1, pib2, turismo1, turismo2, kmp1, kmp2, pibcap1, pibcap2);

    float v2a = getValor(op1, 2, populacao1, populacao2, km1, km2, pib1, pib2, turismo1, turismo2, kmp1, kmp2, pibcap1, pibcap2);
    float v2b = getValor(op1, 2, populacao1, populacao2, km1, km2, pib1, pib2, turismo1, turismo2, kmp1, kmp2, pibcap1, pibcap2);
    
    //comparacao
    float soma1 = v1a + v1b;
    float soma2 = v2a + v2b;

    //Resultado

    printf("Resultado\n");

    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n\n", cidade2);

    printf("Atributos escolhidos: %d e %d\n\n", op1, op2);

    printf("valores\n");
    printf("%s -> %.2f e %.2f (soma: %.2f)\n", cidade1, v1a, v1b, soma1);
    printf("%s -> %.2f e %.2f (soma: %.2f)\n\n", cidade2, v2a, v2b, soma2);
    
    if (soma1 > soma2)
      printf("vencedora: %s!\n", cidade1);
    else if (soma2 > soma1)
      printf("vencedora: %s!\n", cidade2);
    else
      printf("Empate!\n");

    return 0;
  }
