#include <stdio.h>

int main()
{
    int vetor[10];

    for(int i = 0; i < 10; i++){
        scanf("%i",&vetor[i]);

        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%i \n",vetor[i]);
    }
}
