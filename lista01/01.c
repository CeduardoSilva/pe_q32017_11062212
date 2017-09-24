#include <stdio.h>

int main ()
{
    
    int valor, resto;
    printf("Insira um numero: ");
    scanf("%d", &valor);

    resto = valor%2;

    if (resto == 0) 
    {
        printf("par\n");
    }
    else
    {
        printf("impar\n");
    }

    return 0;

}