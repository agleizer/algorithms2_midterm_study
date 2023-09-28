/*
3. Escreva uma funcao que recebe dois vetores inteiros A[] e B[], em seguida, a sua funcao imprime na tela os valores referentes a INTERSECcaO entre os vetores, ou seja, os elementos em comum entre os dois vetores. Considere que os vetores dados nao possuem valores duplicados e nao estao ordenados.:
*/

#include <stdio.h>
#include "bibliotecaC.h"
#include <time.h>
#include <stdlib.h>

void interseccaoVetores()
{
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
    imprimeVetor(vetorA, tamanhoA);
    imprimeVetor(vetorB, tamanhoB);
    int tamanhoC;
    tamanhoC = (tamanhoA > tamanhoB) ? tamanhoA : tamanhoB;
    int vetorV[tamanhoC];

    manterTerminalAberto();
    return 0;
}
