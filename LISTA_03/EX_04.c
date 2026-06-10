#include <stdio.h>

int main()
{
    int vetor[6];
    int maior;

    for(int i = 0; i < 6; i++){
        scanf("%i",&vetor[i]);
    }

    maior = vetor[0];

    for(int i = 1; i < 6; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("%i \n",maior);
}
