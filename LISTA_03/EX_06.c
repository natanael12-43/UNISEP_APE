#include <stdio.h>

int main()
{
    int vetor[10];
    int positivos = 0;

    for(int i = 0; i < 10; i++){
        scanf("%i",&vetor[i]);

        if(vetor[i] > 0){
            positivos++;
        }
    }

    printf("%i \n",positivos);
}
