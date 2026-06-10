#include <stdio.h>

int main()
{
    int vetor[10];
    int soma = 0;
    float media;

    for(int i = 0; i < 10; i++){
        scanf("%i",&vetor[i]);
        soma = soma + vetor[i];
    }

    media = soma / 10.0;

    printf("%.2f \n",media);
}
