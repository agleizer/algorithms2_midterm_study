/*
1. Escreva um programa que recebe um vetor de numero inteiros, e verifica se os elementos do vetor estao em ordem crescente. A funçao retorna true se estiver em ordem crescente e false, caso contrario.
*/

#include <stdio.h>
#include "bibliotecaC.h"
#define MIN 1
#define MAX 100
#include <time.h>
#include <stdlib.h>

int verificaOrdemVetor(int vetor[], int tamanho)
{
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i - 1] > vetor[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    srand(time(NULL)); // inicializa gerador randomico
    printf("Informe o tamanho do vetor desejado: ");
    int tamanho;
    tamanho = lerInt();
    int vetor[tamanho];
    populaVetorIntRand(vetor, tamanho, MIN, MAX);
    imprimeVetor(vetor, tamanho);
    printf("%d\n", verificaOrdemVetor(vetor, tamanho));
    manterTerminalAberto();
}