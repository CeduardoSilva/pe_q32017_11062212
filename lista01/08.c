#include <stdio.h>

int main()
{

    int i, c, n1, n2, result;
    int posicao = 0;

    printf("Digite um valor: ");
    scanf("%d", &i);

    for(c = 0; c <= i; c++)
    {
        if(c == 0) 
        {
            printf("%d", 0);
        }
        else if(c == 1) 
        {
            printf(", %d", 1);
        }
        else if(c == 2)
        {
            printf(", %d",1);
            n1 = 1;
            n2 = 1;
        } 
        else 
        {
            result = n1 + n2;
            printf(", %d", result);
            n1 = n2;
            n2 = result;
        }
    }

    printf("\n");
    return 0;

}