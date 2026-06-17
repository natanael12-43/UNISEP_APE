#include <stdio.h>

int calcularMdc(int numero1, int numero2)
{
    int resto;

    if(numero1 < 0){
        numero1 = numero1 * -1;
    }

    if(numero2 < 0){
        numero2 = numero2 * -1;
    }

    while(numero2 != 0){
        resto = numero1 % numero2;
        numero1 = numero2;
        numero2 = resto;
    }

    return numero1;
}

int main()
{
    int numero1, numero2;

    scanf("%i",&numero1);
    scanf("%i",&numero2);

    printf("%i \n",calcularMdc(numero1, numero2));
}
