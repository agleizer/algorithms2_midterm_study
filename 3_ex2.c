/*
Ex2. Escreva uma funcao que calcula a area de uma esfera e retorna o valor em ponto flutuante. Solicite ao usuario que forneca o raio. A constante Pi deve estar declarada.
*/

#include <stdio.h>
#include "bibliotecaC.h"
#define PI 3.1415926

float areaEsfera(float raio)
{
    float area = 4 * PI * raio * raio;
    return area;
}

int main()
{
    float raio;
    printf("Informe o valor do raio: ");
    raio = lerFloat();
    float area = areaEsfera(raio);
    printf("A area de uma esfera com raio %.2f é = %.2f.\n", raio, area);
    manterTerminalAberto();
    return 0;
}