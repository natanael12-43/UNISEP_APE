#include <stdio.h>

int main()
{
    int vetor[10];
    int maisRepete;
    int maiorQuantidade = 0;

    for(int i = 0; i < 10; i++){
        scanf("%i",&vetor[i]);
    }

    maisRepete = vetor[0];

    for(int i = 0; i < 10; i++){
        int quantidade = 0;

        for(int j = 0; j < 10; j++){
            if(vetor[i] == vetor[j]){
                quantidade++;
            }
        }

        if(quantidade > maiorQuantidade){
            maiorQuantidade = quantidade;
            maisRepete = vetor[i];
        }
    }

    printf("%i \n",maisRepete);
}
