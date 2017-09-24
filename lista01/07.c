#include <stdio.h>

int main()
{

    int x, y, i;
    int resultado = 1;

    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    for(i = 0; i<y; i++)
    {
        resultado *= x;
    }

    printf("%d\n", resultado);

    return 0;

}