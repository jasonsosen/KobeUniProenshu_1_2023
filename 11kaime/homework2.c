#include <stdio.h>

void nibai(int *a){
    *a = *a*2;// この部分をどのように書けばよいかを解答せよ．
    return;
}

int main(void){
    int a;
    a = 2;
    nibai(&a);
    printf("%d\n", a);
    return 0;
}
