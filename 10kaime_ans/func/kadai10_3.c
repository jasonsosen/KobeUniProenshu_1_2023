//kadai10_3.c
//解答例
#include <stdio.h>

int isEven(int); // 関数のプロトタイプ宣言．入力と出力の型を，あらかじめ指定しておく．

int isEven(int n){
    if (n%2 ==0){
        return 1;
    }else{
        return 0;
    }
}

int main(void){ //main関数が isEvenの定義の前でもOK
    int a=0;
    a = isEven(3);
    printf("%d\n", a); //3は奇数なので0が表示されるはず
    a = isEven(4);
    printf("%d\n", a); //4は偶数なので0が表示されるはず
    return 0;
}