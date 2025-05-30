#include <stdio.h>

float tasizan(float a, float b);
float hikizan(float a, float b);
float kakezan(float a, float b);
float warizan(float a, float b);

int main(void){
    float x, y, s;
    char z;
    printf("モード選択( + , - , * , / )\n");
    scanf("%c", &z);
    printf("一つ目の値の入力:\n");
    scanf("%f", &x);
    printf("二つ目の値の入力:\n");
    scanf("%f", &y);
    /*switch(z){
        case '+':
        s = tasizan(x, y);
        break;
        case '-':
        s = hikizan(x, y);
        break;
        case '*':
        s = kakezan(x, y);
        break;
        case '/':
        s = warizan(x, y);
        break;
        default:
        printf("不正なモードです");
    }*/
    if(z=='+'){
        s = tasizan(x, y);
    }
    else if(z=='-'){
        s = hikizan(x, y);
    }
    else if(z=='*'){
        s = kakezan(x, y);
    }
    else if(z=='/'){
        s = warizan(x, y);
    }
    else {
        printf("不正なモードです");
    }
    printf("答えは%fです\n", s);
    return 0;
}

float tasizan(float a, float b){
    return a+b;
}

float hikizan(float a, float b){
    return a-b;
}

float kakezan(float a, float b){
    return a*b;
}

float warizan(float a, float b){
    return a/b;
}