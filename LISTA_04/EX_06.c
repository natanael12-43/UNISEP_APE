#include <stdio.h>

long long calcularFatorial(int numero)
{
    long long fatorial = 1;

    for(int i = 1; i <= numero; i++){
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main()
{
    int numero;

    scanf("%i",&numero);

    printf("%lld \n",calcularFatorial(numero));
}
