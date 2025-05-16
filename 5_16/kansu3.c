#include <stdio.h>

float enmenseki(float a);

int main(void){
    float x;
    scanf("%f", &x);
    printf("%f\n", enmenseki(x));
    return 0;
}

float enmenseki(float a){
    float s;
    s=a*a*3.14;
    return s;
}