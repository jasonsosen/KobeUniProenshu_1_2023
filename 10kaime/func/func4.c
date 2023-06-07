//func4.c
#include <stdio.h>
#include <stdlib.h> // 乱数生成のために必要

int main(void){
    roll_a_die(10);//整数を入力しているので関数の仕様とあっている．
    return 0;
}

void roll_a_die(int n){
    int i;
    for(i=0;i<n;i++){
    	printf("%d\n", rand()%6+1);
    }
    return; 
}
