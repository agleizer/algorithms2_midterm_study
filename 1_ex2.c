/*
Escreva um programa que peca para o usuario fornecer o valor do raio de um circulo, e a seguir calcule e imprima na tela a area e o perimetro deste circulo.
Observacao: Assuma que o valor de PI é 3.1415926.
*/

#include <stdio.h>
#include "bibliotecaC.h"
#define PI 3.1415926

float areaCirculo(float raio)
{
    float area;
    area = PI * raio * raio;
    return area;
}

float perimetroCirculo(float raio)
{
    float perim;
    perim = 2 * PI * raio;
    return perim;
}

int main()
{
    printf("Informe o valor do raio de um circulo: ");
    float raio = lerFloat();
    float area = areaCirculo(raio);
    float perimetro = perimetroCirculo(raio);
    printf("Um circulo com raio %.2f tem perimetro = %.2f e area = %.2f.\n", raio, perimetro, area);
    manterTerminalAberto();
    return 0;
}