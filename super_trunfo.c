#include <stdio.h>

int main () {

    //Criação das variáveis que vão ser usadas

    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Resgistro da primeira carta
        
    printf("Vamos registrar a sua primeira carta!\n");
    printf("Qual o estado dessa carta?\n");
    scanf(" %c", &estado1);
    printf("Qual o código dessa carta?\n");
    scanf(" %s", codigo1);
    printf("Qual o nome da cidade dessa carta?\n");
    scanf(" %s", cidade1);
    printf("Qual o número de habitantes dessa cidade?\n");
    scanf(" %d", &populacao1);
    printf("Qual a área em quilometros quadrados dessa cidade?\n");
    scanf(" %f", &area1);
    printf("Qual o PIB dessa cidade?\n");
    scanf(" %f", &pib1);
    printf("Qual o número de pontos turísticos dessa cidade?\n");
    scanf(" %d", &pontosTuristicos1);

    //Resgistro da segunda carta

    printf("Agora que já registramos a primeira carta, vamos registrar a sua segunda carta!\n");
    printf("Qual o estado dessa carta?\n");
    scanf(" %c", &estado2);
    printf("Qual o código dessa carta?\n");
    scanf(" %s", codigo2);
    printf("Qual o nome da cidade dessa carta?\n");
    scanf(" %s", cidade2);
    printf("Qual o número de habitantes dessa cidade?\n");
    scanf(" %d", &populacao2);
    printf("Qual a área em quilometros quadrados dessa cidade?\n");
    scanf(" %f", &area2);
    printf("Qual o PIB dessa cidade?\n");
    scanf(" %f", &pib2);
    printf("Qual o número de pontos turísticos dessa cidade?\n");
    scanf(" %d", &pontosTuristicos2);
    printf("Suas duas cartas foram registradas!\n");

    //Mostra os dados da primeira carta registrada.

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Número de pontos túristicos: %d\n", pontosTuristicos1);

    //Mostra os dados da segunda carta registrada.

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais.\n", pib2);
    printf("Número de pontos túristicos: %d\n", pontosTuristicos2);
}

/* 
Pensamento lógico:

- Primeira carta (scanf)
--Estado1
--Codigo1
--Nome1
--População1
--Area1
--PIB1
--PontosTur1

- Segunda carta (scanf)
--Estado2
--Codigo2
--Nome2
--População2
--Area2
--PIB2
--PontosTur2

-Print carta 1 (printf)
--Estado1
--Codigo1
--Nome1
--População1
--Area1
--PIB1
--PontosTur1

-Print carta 2 (printf)
--Estado2
--Codigo2
--Nome2
--População2
--Area2
--PIB2
--PontosTur2

Fim */
