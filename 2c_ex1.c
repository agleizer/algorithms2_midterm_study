/*
Desenvolva um programa que:
Sorteie um numero inteiro no intervalo de 1 a 100 (incluindo os valores 1 e 100).
Solicite que o usuario tente adivinhar o numero sorteado, digitando o seu palpite.
(se o usuario entrar um valor invalido - menor que 1 ou maior que 100 - o programa devera refazer a solicitacao ate que o usuario entre um valor valido).
Verifique se o palpite do usuario esta correto:
Se estiver correto, o programa devera imprimir na tela “Parabens!!! Voce acertou!”
Se o palpite for menor que o numero sorteado, devera imprimir “Voce chutou muito baixo! O valor correto e xx.” (onde xx e o numero sorteado).
Se o palpite for maior que o numero sorteado, devera imprimir “Voce chutou muito alto! O valor correto e xx.” (onde xx e o numero sorteado).
*/

#include <stdio.h>
#include "bibliotecaC.h"
#define MIN 1
#define MAX 100

void comparaPalpite(int resposta, int palpite)
{
    if (palpite < resposta)
    {
        printf("Voce chutou muito baixo.\n");
    }
    else if (palpite > resposta)
    {
        printf("Voce chutou muito alto.\n");
    }
    else
    {
        printf("Voce acertou!\n");
    }
}

int main()
{
    int numAleatorio = intRand(MIN, MAX);
    int palpite;
    printf("Para debug, o numero é %d.\n", numAleatorio);
    do
    {
        printf("Informe seu palpite [1, 100]: ");
        palpite = lerInt();
    } while (palpite < 1 || palpite > 100);
    comparaPalpite(numAleatorio, palpite);
    manterTerminalAberto();
    return 0;
}