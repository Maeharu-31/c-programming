#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    if(score >= 80) {
        printf("合格\n");
    }
    else {
        printf("不合格\n");
    }
    return 0;
}