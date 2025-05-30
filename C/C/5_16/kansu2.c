#include <stdio.h>

float tyouhoukeimenseki(float a, float b);

int main(void){
    float x, y;
    scanf("%f, %f", &x, &y);
    printf("%f\n", tyouhoukeimenseki(x, y));
    return 0;
}

float tyouhoukeimenseki(float a, float b){
    float s;
    s=a*b;
    return s;
}