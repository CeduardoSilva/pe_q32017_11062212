#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float gausslegendre(int n) {

    float a = 1;
    float b = 1/sqrt(2);
    float t = 1/4;
    float p = 1;
    
    for(int i=0; i<n; i++) {
    
        float a1 = (a+b)/2;
        b = sqrt(a*b);
        t = t - (p*pow((a - a1),2));
        p = 2*p;
        a = a1;

    }
    return pow((a+b),2)/(4*t);
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%.20f\n", gausslegendre(n));
    return 0;

}