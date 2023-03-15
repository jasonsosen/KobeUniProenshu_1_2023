//func6.c
#include <stdio.h>
#include <stdlib.h> // 乱数生成のために必要

void roll_a_die(int); // 関数のプロトタイプ宣言．入力と出力の型を，あらかじめ指定しておく．

int main(void){
    roll_a_die(3.0);
    return 0;
}

void roll_a_die(int n){
    int i;
    printf("n=%d\n", n);
    for(i=0;i<n;i++){
        printf("%d %d\n", i, rand()%6+1);
    }
    return; 
}
