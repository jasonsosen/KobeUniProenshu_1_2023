// pointer4.c
#include <stdio.h>

void cube(int* a){// main 関数の中の変数 a そのものをポインタとしてもらう．
    int b = *a; // a の値を使うときには *a のように書く．
    *a = b*b*b; // *a**a**a; と書いても良い（が読みにくい）．
    return;
}

int main(void){
    int a=2;
    cube(&a); // 変数 a そのものを変更できるようにメモリ上のアドレスを渡す．
    printf("%d\n", a); // 8が表示される．
    return 0;
}
