#include <stdio.h>
#include <string.h>

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[10] = "A";
    char codCarta[10] = "A1";
    char nomeCidade[30] = "Aracaju";
    int populacao = 600000;
    float area = 330000;
    float PIB = 10.4;
    int qtdepontoTuristico = 20;
    int pontos = 40;

    char estado2[10] = "B";
    char codCarta2[10] = "B1";
    char nomeCidade2[30] = "Salvador";
    int populacao2 = 1000000;
    float area2 = 500000;
    float PIB2 = 15.1;
    int qtdepontoTuristico2 = 40;
    int pontos2 = 30;

    float densidade1, densidade2;
    int opcao;

    // Cálculo da densidade populacional

    densidade1 = populacao / area;
    densidade2 = populacao2 / area2;

    int atributo1, atributo2;

    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    char nomeAttr1[40];
    char nomeAttr2[40];

    // MENU PRIMEIRO ATRIBUTO

    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    switch (atributo1)
    {

    case 1:
        valor1_carta1 = populacao;
        valor1_carta2 = populacao2;
        sprintf(nomeAttr1, "Populacao");
        break;

    case 2:
        valor1_carta1 = area;
        valor1_carta2 = area2;
        sprintf(nomeAttr1, "Area");
        break;

    case 3:
        valor1_carta1 = PIB;
        valor1_carta2 = PIB2;
        sprintf(nomeAttr1, "PIB");
        break;

    case 4:
        valor1_carta1 = pontos;
        valor1_carta2 = pontos2;
        sprintf(nomeAttr1, "Pontos Turisticos");
        break;

    case 5:
        valor1_carta1 = densidade1;
        valor1_carta2 = densidade2;
        sprintf(nomeAttr1, "Densidade Demografica");
        break;

    default:
        printf("Opcao invalida!\n");
        return 0;
    }

    // MENU SEGUNDO ATRIBUTO

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1)
        printf("1 - Populacao\n");
    if (atributo1 != 2)
        printf("2 - Area\n");
    if (atributo1 != 3)
        printf("3 - PIB\n");
    if (atributo1 != 4)
        printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5)
        printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1)
    {
        printf("Nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch (atributo2)
    {

    case 1:
        valor2_carta1 = populacao;
        valor2_carta2 = populacao2;
        sprintf(nomeAttr2, "Populacao");
        break;

    case 2:
        valor2_carta1 = area;
        valor2_carta2 = area2;
        sprintf(nomeAttr2, "Area");
        break;

    case 3:
        valor2_carta1 = PIB;
        valor2_carta2 = PIB2;
        sprintf(nomeAttr2, "PIB");
        break;

    case 4:
        valor2_carta1 = pontos;
        valor2_carta2 = pontos2;
        sprintf(nomeAttr2, "Pontos Turisticos");
        break;

    case 5:
        valor2_carta1 = densidade1;
        valor2_carta2 = densidade2;
        sprintf(nomeAttr2, "Densidade Demografica");
        break;

    default:
        printf("Opcao invalida!\n");
        return 0;
    }

    // AJUSTE DA REGRA PARA DENSIDADE

    if (atributo1 == 5)
    {
        valor1_carta1 = 1 / valor1_carta1;
        valor1_carta2 = 1 / valor1_carta2;
    }

    if (atributo2 == 5)
    {
        valor2_carta1 = 1 / valor2_carta1;
        valor2_carta2 = 1 / valor2_carta2;
    }

    // SOMA DOS ATRIBUTOS

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // RESULTADOS

    printf("\n=== RESULTADO DA RODADA ===\n\n");

    printf("Pais 1: %s\n", nomeCidade);
    printf("Pais 2: %s\n\n", nomeCidade2);

    printf("Atributo 1: %s\n", nomeAttr1);
    printf("%s: %.2f\n", nomeCidade, valor1_carta1);
    printf("%s: %.2f\n\n", nomeCidade2, valor1_carta2);

    printf("Atributo 2: %s\n", nomeAttr2);
    printf("%s: %.2f\n", nomeCidade, valor2_carta1);
    printf("%s: %.2f\n\n", nomeCidade2, valor2_carta2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade, soma1);
    printf("%s: %.2f\n\n", nomeCidade2, soma2);

    // OPERADOR TERNÁRIO

    if (soma1 == soma2)
        printf("Resultado: Empate!\n");
    else
        printf("Vencedor: %s\n", (soma1 > soma2) ? nomeCidade : nomeCidade2);

    return 0;
}
