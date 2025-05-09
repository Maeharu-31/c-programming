#include <stdio.h>

int main(void) {
    int a, b;
    char e;
    scanf("%d, %d, %c", &a, &b, &e);
    switch (e){
        case '+':
        printf("%d\n", a+b);
        break;
        case '-':
        printf("%d\n", a-b);
        break;
        case '*':
        printf("%d\n", a*b);
        break;
        case '/':
        printf("%d\n", a/b);
        break;
        default:
        printf("lnvalid operator\n");
    }
    return 0;
}