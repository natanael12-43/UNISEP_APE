#include <stdio.h>

int contarVogais(char texto[])
{
    int quantidade = 0;

    for(int i = 0; texto[i] != '\0'; i++){
        if(texto[i] == 'a' || texto[i] == 'A' ||
           texto[i] == 'e' || texto[i] == 'E' ||
           texto[i] == 'i' || texto[i] == 'I' ||
           texto[i] == 'o' || texto[i] == 'O' ||
           texto[i] == 'u' || texto[i] == 'U'){
            quantidade++;
        }
    }

    return quantidade;
}

int main()
{
    char texto[100];

    scanf(" %99[^\n]",texto);

    printf("%i \n",contarVogais(texto));
}
