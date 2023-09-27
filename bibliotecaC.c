/*
BIBLIOTECA DE FUNCOES UTEIS EM C

ALAN GLEIZER - 2023
*/

#include <stdio.h>
#include <stdlib.h> // srand definido aqui
#include <time.h>   // time definido aqui
#include "bibliotecaC.h"

void manterTerminalAberto()
{
    int temp = 0;
    do
    {
        printf("Digite -1 para sair: ");
        scanf("%d", &temp);
    } while (temp != -1);
}

float lerFloat()
{
    float variavel;
    scanf("%f", &variavel);
    return variavel;
}

int lerInt()
{
    int variavel;
    scanf("%d", &variavel);
    return variavel;
}

int intRand(int min, int max)
{
    int numero;
    srand(time(NULL));                 // inicializa gerador randomico
    numero = min + rand() % (max + 1); // // gera um número de 1 a 100 e atribui
    return numero;
}