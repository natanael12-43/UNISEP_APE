#include <stdio.h>

int somar(int numero1, int numero2)
{
    return numero1 + numero2;
}

int main()
{
    int numero1, numero2;

    scanf("%i",&numero1);
    scanf("%i",&numero2);

    printf("%i \n",somar(numero1, numero2));
}
