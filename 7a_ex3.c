/*
Escreva um programa que peca para o usuario digitar o nome e, a seguir, imprima o nome digitado do contrario (do ultimo para o primeiro caractere).
*/

#include <stdio.h>
#include "bibliotecaC.h"
#include <string.h>

void inverteString(char vetor[])
{
    char buffer;
    for (int i = 0; i < (strlen(vetor) - 1) / 2; i++)
    {
        // printf("Trocando %c por %c\n", vetor[i], vetor[strlen(vetor) - (2 + i)]); // para teste
        buffer = vetor[i];
        vetor[i] = vetor[strlen(vetor) - (2 + i)];
        vetor[strlen(vetor) - (2 + i)] = buffer;
    }
}

int main()
{
    printf("Informe seu nome: ");
    char nome[100];
    fgets(nome, 50, stdin);
    inverteString(nome);
    printf("Seu nome InVeRtIdO: %s", nome);
    manterTerminalAberto();
    return 0;
}