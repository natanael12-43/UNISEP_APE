#include <stdio.h>

int main()
{
    int vetor[6];
    int aux;
    int segundoMaior = 0;
    int encontrou = 0;

    for(int i = 0; i < 6; i++){
        scanf("%i",&vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 6; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(int i = 1; i < 6; i++){
        if(vetor[i] < vetor[0]){
            segundoMaior = vetor[i];
            encontrou = 1;
            break;
        }
    }

    if(encontrou == 1){
        printf("%i \n",segundoMaior);
    }else{
        printf("Nao existe segundo maior\n");
    }
}
