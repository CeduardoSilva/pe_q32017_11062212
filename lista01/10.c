#include <stdio.h>

int main()
{

    double temp, result;
    int opt;

    printf("1: Celcius -> Kelvin\n");
    printf("2: Kelvin -> Celcius\n");
    printf("Digite um valor de temperatura e uma opção (1, 2): ");
    scanf("%lf %d", &temp, &opt);

    if(opt == 1) result = temp + 273.15;
    if(opt == 2) result = temp - 273.15;

    printf("%lf\n", result);

    return 0;

}