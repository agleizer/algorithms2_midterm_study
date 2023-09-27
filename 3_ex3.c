/*
Ex3. Escreva um programa que solicita hora e minuto ao usuario. Crie uma funcao minuto( ) que recebe hora e minuto e calcula a diferenca entre dois tempos. Por exemplo a diferenca entre 2:30 e 1:40 = 50 min.
*/

#include <stdio.h>
#include "bibliotecaC.h"

/*
NAO FUNCIONA, NAO LE COMO INTS
void leHorario(int hora, int minuto)
{
    printf("Informe a hora e minuto no formato hh mm: ");
    scanf("%d %d", &hora, &minuto);
}
*/

void leHorario(int hora, int minuto)
{
    printf("Informe a hora");
    scanf("%d", &hora);
    printf("Informe o minuto");
    scanf("%d", &minuto);
}

int horaMinParaMins(int hora, int minuto)
{
    int minutos = minuto + hora * 60;
    return minutos;
}

int main()
{
    int hora1, minuto1, hora2, minuto2;
    /* // CHAMAR O SCANF NA FUNCAO NAO FUNCIONA, PROVAVELMENTE TERIA QUE RETORNAR O VALOR LIDO
    printf("Horario 1\n");
    leHorario(hora1, minuto1);
    printf("Horario 2\n");
    leHorario(hora2, minuto2);
    */
    printf("Informe a hora 1 e minuto 1 no formato hh:mm: ");
    scanf("%d:%d", &hora1, &minuto1);
    printf("Informe a hora 2 e minuto 2 no formato hh:mm: ");
    scanf("%d:%d", &hora2, &minuto2);
    // printf("horarios: %d:%d e %d:%d\n", hora1, minuto1, hora2, minuto2);
    int minutos1 = horaMinParaMins(hora1, minuto1);
    int minutos2 = horaMinParaMins(hora2, minuto2);
    // printf("convertidos: %d e %d\n", minutos1, minutos2);
    int diferenca;
    if (minutos1 > minutos2)
    {
        diferenca = minutos1 - minutos2;
    }
    else
    {
        diferenca = minutos2 - minutos1;
    }
    printf("A diferenca entre os dois horarios eh de %d minutos.\n", diferenca);
    manterTerminalAberto();
    return 0;
}