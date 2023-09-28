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
    // srand(time(NULL));                 // inicializa gerador randomico precisa estar em main onde essa funcao for chamada!
    numero = min + rand() % (max + 1); // // gera um número de 1 a 100 e atribui
    return numero;
}

// minha solucao, requer pausa entre cada iteracao....
void populaVetorIntRand(int vetor[], int tamanho, int min, int max)
{
    int nada;
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = intRand(min, max);
    }
}

void imprimeVetor(int vetor[], int tamanho)
{
    printf("[");
    for (int i = 0; i < tamanho; i++)
    {
        printf(" %d", vetor[i]);
    }
    printf(" ]\n");
}

void zeraVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = 0;
    }
}
