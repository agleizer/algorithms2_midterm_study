/*
Um triangulo possui 3 lados com tamanhos a, b e c.
Para que um triangulo exista, um lado deve ser menor que a soma dos outros dois, ou seja, as seguintes condições devem ser satisfeitas:
a<b+c
b<a+c
c<a+b
Desenvolva um programa que:
Solicite que o usuario digite os tamanhos dos lados do triangulo (a, b e c).
Verifique se existe um triangulo com estes lados.
Apresente na tela o resultado.
*/

#include <stdio.h>
#include "bibliotecaC.h"

void validaTriangulo(float a, float b, float c)
{
    if (a < b + c && b < a + c && c < a + b)
    {
        printf("Triangulo válido.\n");
    }
    else
    {
        printf("Triangulo inválido.\n");
    }
}

int main()
{
    float a, b, c;
    printf("Informe o valor do lado a: ");
    scanf("%f", &a);
    printf("Informe o valor do lado b: ");
    scanf("%f", &b);
    printf("Informe o valor do lado c: ");
    scanf("%f", &c);
    validaTriangulo(a, b, c);
    manterTerminalAberto();
    return 0;
}