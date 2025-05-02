#include <stdio.h>

int main(void) {
    char c;
    scanf("%c", &c);
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(c == '+') {
        printf("%d\n", a+b);
    }
    else if(c == '-') {
        printf("%d\n", a-b);
    }
    else if(c == '*') {
        printf("%d\n", a*b);
    }
    else if(c == '/') {
        printf("%d\n", a/b);
    }
    else {
        printf("lnvalid operator\n");
    }
    return 0;
}