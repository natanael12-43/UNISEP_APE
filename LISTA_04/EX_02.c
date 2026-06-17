#include <stdio.h>

int ehPar(int numero)
{
    if(numero % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int numero;

    scanf("%i",&numero);

    printf("%i \n",ehPar(numero));
}
