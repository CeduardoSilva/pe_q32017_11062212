#include <stdio.h>

int main()
{

    int x;
    int resultado = 1;

    printf("Digite um valor: ");
    scanf("%d", &x);

    while(x>0)
    {
        resultado *= x;
        x--;
    }

    printf("%d\n", resultado);

    return 0;

}