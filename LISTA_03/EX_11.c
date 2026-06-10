#include <stdio.h>

int main()
{
    int vetor[10];
    int aux;

    for(int i = 0; i < 10; i++){
        scanf("%i",&vetor[i]);
    }

    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 10; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%i \n",vetor[i]);
    }
}
