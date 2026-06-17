#include <stdio.h>

int maiorValor(int numero1, int numero2, int numero3)
{
    int maior = numero1;

    if(numero2 > maior){
        maior = numero2;
    }

    if(numero3 > maior){
        maior = numero3;
    }

    return maior;
}

int main()
{
    int numero1, numero2, numero3;

    scanf("%i",&numero1);
    scanf("%i",&numero2);
    scanf("%i",&numero3);

    printf("%i \n",maiorValor(numero1, numero2, numero3));
}
