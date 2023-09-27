/*
Escreva um programa que peca para o aluno entrar a sua media (de 0.0 a 10.0) e a sua porcentagem de frequencia (de 0 a 100%).
O seu programa devera apresentar o resultado do aluno de acordo com as seguintes regras:
Se a frequencia foi menor que 75%, o aluno esta REPROVADO, não importa a nota que ele tirou.
Se a frequencia foi maior ou igual a 75% e a sua media foi maior ou igual a 7.5, ele esta APROVADO.
Se a frequencia foi maior ou igual a 75% mas a sua media foi menor que 7.5, ele esta DE EXAME.
*/

#include <stdio.h>
#include "bibliotecaC.h"
#define FREQ_MIN 75
#define MEDIA 7.5

int defineAprovacao(float media, int frequencia)
{
    if (frequencia < FREQ_MIN)
    {
        printf("REPROVADO\n");
        return -1;
    }
    else if (media < MEDIA)
    {
        printf("DE EXAME\n");
        return 0;
    }
    else
    {
        printf("APROVADO\n");
        return 1;
    }
}

int main()
{
    printf("Informe a sua media: ");
    float media = lerFloat();
    printf("Informe a sua frequencia: ");
    int freq = lerInt();
    defineAprovacao(media, freq);
    manterTerminalAberto();
    return 0;
}