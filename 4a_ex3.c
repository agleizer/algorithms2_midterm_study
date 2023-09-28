/*
3. Escreva uma funcao que recebe dois vetores inteiros A[] e B[], em seguida, a sua funcao imprime na tela os valores referentes a INTERSECcaO entre os vetores, ou seja, os elementos em comum entre os dois vetores. Considere que os vetores dados nao possuem valores duplicados e nao estao ordenados.:
*/

#include <stdio.h>
#include "bibliotecaC.h"
#include <time.h>
#include <stdlib.h>

void interseccaoVetores(int vetor1[], int tamanho1, int vetor2[], int tamanho2, int vetor3[], int tamanho3)
{
    int contadorVetor3 = 0;
    for (int i = 0; i < tamanho1; i++)
    {
        for (int j = 0; j < tamanho2; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                vetor3[contadorVetor3] = vetor1[i];
                contadorVetor3++;
            }
        }
    }
}

int main()
{
    srand(time(NULL)); // inicializa gerador randomico
    // criacao dos vetores
    int tamanhoA = intRand(5, 10);
    int tamanhoB = intRand(5, 10);
    int vetorA[tamanhoA];
    int vetorB[tamanhoB];
    populaVetorIntRand(vetorA, tamanhoA, 1, 50);
    populaVetorIntRand(vetorB, tamanhoB, 1, 50);
    printf("A = ");
    imprimeVetor(vetorA, tamanhoA);
    printf("B = ");
    imprimeVetor(vetorB, tamanhoB);
    int tamanhoC;
    tamanhoC = (tamanhoA > tamanhoB) ? tamanhoA : tamanhoB;
    int vetorC[tamanhoC];
    zeraVetor(vetorC, tamanhoC);
    // calcula interseccao
    interseccaoVetores(vetorA, tamanhoA, vetorB, tamanhoB, vetorC, tamanhoC);
    printf("Interseccao = ");
    imprimeVetor(vetorC, tamanhoC);
    manterTerminalAberto();
    return 0;
}
