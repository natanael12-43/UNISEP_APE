#include <stdio.h>

int main()
{
    int vetor[10];

    for(int i = 0; i < 10; i++){
        scanf("%i",&vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            printf("%i \n",vetor[i]);
        }
    }
}
