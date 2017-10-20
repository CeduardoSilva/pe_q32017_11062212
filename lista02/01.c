#include <stdio.h>

int ehImpar(int n) {
    if(n%2==0) return 0;
    return 1; 
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d\n",ehImpar(n));
    return 0;
    
}