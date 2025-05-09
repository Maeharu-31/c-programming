#include <stdio.h>

int main() {
    int N, s=0, i;
    scanf("%d", &N);
    for(i=1;i<=N;i++) {
        s=s+i;
    }
    printf("%d\n", s);
    return 0;
}