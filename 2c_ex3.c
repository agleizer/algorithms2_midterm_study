/*
Desenvolva um programa que:
Sorteie um numero inteiro no intervalo de 1 a 100 (incluindo os valores 1 e 100).
Solicite que o usuario tente adivinhar o numero sorteado, digitando o seu palpite.
(se o usuario entrar um valor invalido - menor que 1 ou maior que 100 - o programa devera refazer a solicitacao ate que o usuario entre um valor valido).
Verifique se o palpite do usuario esta correto:
Se estiver correto, o programa devera imprimir na tela “Parabens!!! Voce acertou!”
Se o palpite for menor que o numero sorteado, devera imprimir “Voce chutou muito baixo! O valor correto e xx.” (onde xx e o numero sorteado).
Se o palpite for maior que o numero sorteado, devera imprimir “Voce chutou muito alto! O valor correto e xx.” (onde xx e o numero sorteado).

Desenvolva um programa semelhante ao anterior, so que com as seguintes diferencas:
Se o palpite do usuario estiver incorreto, o programa devera imprimir a dica (“voce chutou muito baixo” ou “voce chutou muito alto”) sem mostrar o valor sorteado, incrementar o numero de tentativas e dar uma nova chance ate que ele consiga acertar o numero sorteado.
Quando o usuario conseguir acertar o numero sorteado, o programa devera apresentar a mensagem de parabens e mostrar o numero de tentativas feitas pelo usuario ate acertar o numero.

Desenvolva um programa semelhante ao anterior, so que com a seguinte diferenca:
Caso o usuario nao consiga acertar o numero sorteado apos a 5a tentativa, o programa devera mostrar a mensagem “voce excedeu o numero maximo de tentativas” e mostrar qual era o numero sorteado.
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

int lePalpite()
{
    int palpite;
    do
    {
        printf("Informe seu palpite [1, 100]: ");
        palpite = lerInt();
    } while (palpite < 1 || palpite > 100);
    return palpite;
}

int main()
{
    int numAleatorio = intRand(MIN, MAX);
    int palpite;
    int contador = 1;
    printf("Para debug, o numero e %d.\n", numAleatorio);
    palpite = lePalpite();
    while (palpite != numAleatorio && contador < 5)
    {
        contador++;
        comparaPalpite(numAleatorio, palpite);
        palpite = lePalpite();
    }
    if (palpite == numAleatorio)
    {
        printf("Voce acertou!\n");
        printf("Voce precisou de %d tentativas!\n", contador);
    }
    else
    {
        printf("Voce excedeu o numero maximo de tentativas.\n");
        printf("O numero era %d.\n", numAleatorio);
    }

    manterTerminalAberto();
    return 0;
}