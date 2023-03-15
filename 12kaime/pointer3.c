//pointer3.c
#include <stdio.h>

int main(void){
        int a=1;
        int *b; //int 型の変数のアドレスを保存できる変数 b を作る．
        int c=2, *d=&c; //混ぜて変数を宣言することも出来る．
        b = &a; //ポインタ b は a を表すことにする．
        printf("%d \n", *b); // b の表す変数である a の値（1）が表示される．
        printf("%d \n", *d); // d の表す変数である c の値（2）が表示される．
    	*d = 3; // d の表す変数である c の値を 3 に更新する．
        printf("%d \n", c); // c は3になっているので 3 と表示される．
        return 0;
}
