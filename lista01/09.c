#include <stdio.h>

int main()
{

    double temp, result;
    int opt;

    printf("1: Celcius -> Fahrenheit\n");
    printf("2: Fahrenheit -> Celcius\n");
    printf("Digite um valor de temperatura e uma opção (1, 2): ");
    scanf("%lf %d", &temp, &opt);

    if(opt == 1) result = (temp * (9.0/5.0)) + 32;
    if(opt == 2) result = (temp - 32)*(5.0/9.0);

    printf("%lf\n", result);

    return 0;

}