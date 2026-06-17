#include <stdio.h>

void inverterTexto(char texto[])
{
    int tamanho = 0;
    char aux;

    while(texto[tamanho] != '\0'){
        tamanho++;
    }

    for(int i = 0; i < tamanho / 2; i++){
        aux = texto[i];
        texto[i] = texto[tamanho - 1 - i];
        texto[tamanho - 1 - i] = aux;
    }
}

int main()
{
    char texto[100];

    scanf(" %99[^\n]",texto);

    inverterTexto(texto);

    printf("%s \n",texto);
}
