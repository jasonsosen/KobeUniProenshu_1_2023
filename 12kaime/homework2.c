// homework2.c
#include <stdio.h>

void func(int n){
    if(n=1){
        return 1;
    }
    return f(n-1)/2+1;
}

int main(void){
        int a;
        a = 2;
        printf("%d\n", func(3));
        return 0;
}
