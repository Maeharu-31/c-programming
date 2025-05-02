#include <stdio.h>

int main(void) {
    int a, b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%c", &c);
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