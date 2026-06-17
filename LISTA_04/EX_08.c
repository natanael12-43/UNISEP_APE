#include <stdio.h>

float calcularMedia(float vetor[], int tamanho)
{
    float soma = 0;

    for(int i = 0; i < tamanho; i++){
        soma = soma + vetor[i];
    }

    return soma / tamanho;
}

int main()
{
    float vetor[100];
    int tamanho;

    scanf("%i",&tamanho);

    for(int i = 0; i < tamanho; i++){
        scanf("%f",&vetor[i]);
    }

    printf("%.2f \n",calcularMedia(vetor, tamanho));
}
