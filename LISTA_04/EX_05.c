#include <stdio.h>

float celsiusParaFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    float celsius;

    scanf("%f",&celsius);

    printf("%.2f \n",celsiusParaFahrenheit(celsius));
}
