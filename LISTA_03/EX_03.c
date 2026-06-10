#include <stdio.h>

int main()
{
    int vetor[8];
    int soma = 0;

    for(int i = 0; i < 8; i++){
        scanf("%i",&vetor[i]);
        soma = soma + vetor[i];
    }

    printf("%i \n",soma);
}
