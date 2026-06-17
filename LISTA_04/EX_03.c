#include <stdio.h>

int calcularQuadrado(int numero)
{
    return numero * numero;
}

int main()
{
    int numero;

    scanf("%i",&numero);

    printf("%i \n",calcularQuadrado(numero));
}
