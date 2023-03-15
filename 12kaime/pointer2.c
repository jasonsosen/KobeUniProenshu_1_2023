//pointer2.c
#include <stdio.h>

int cube(int a){// main 関数の中の変数 a のコピー．
    a = a*a*a; // コピーの値が更新されるだけで，main 関数の中の変数 a 自体は変わらない．
    return a;
}

int main(void){
    int a=2;
    printf("%d\n", cube(a)); 
    printf("%d\n", a);
    return 0;
}
