#include <stdio.h>

float volume(float l, float c, float a) {
    return l*c*a;
}

int main() {

    float l, c, a;
    scanf("%f %f %f", &l, &c, &a);
    printf("%.2f\n", volume(l,c,a));
    return 0;

}