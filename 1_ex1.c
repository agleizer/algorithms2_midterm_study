/*
Escreva um programa que peca para o usuario fornecer a temperatura em graus Celsius, e a seguir calcule e imprima na tela a temperatura correspondente em Fahrenheit.
*/

#include <stdio.h>
#include "bibliotecaC.h"

float leCelsius()
{
    float celsius;
    printf("Informe uma temperatura em Celsius: ");
    scanf("%f", &celsius);
    return celsius;
}

float cParaFahr(float celsius)
{
    float fahrenheit;
    fahrenheit = (celsius * 9.0 / 5) + 32;
    return fahrenheit;
}

int main()
{
    float celsius = leCelsius();
    float fahrenheit = cParaFahr(celsius);
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);
    manterTerminalAberto();
    return 0;
}