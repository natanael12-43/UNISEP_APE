#include <stdio.h>

int main()
{
    int vetor[6];
    int menor;

    for(int i = 0; i < 6; i++){
        scanf("%i",&vetor[i]);
    }

    menor = vetor[0];

    for(int i = 1; i < 6; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("%i \n",menor);
}
