#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;
    srand ((unsigned)time(NULL));
    a = rand ()%100+1;
    while(1){
        printf("値を入力してください\n");
        scanf("%d", &b);
        if(b>a){
            printf("Too high\n");
            continue;
        }
        else if(b<a){
            printf("Too low\n");
            continue;
        }
        else {
            printf("Correct\n");
            break;
        }
    }
    return 0;
}