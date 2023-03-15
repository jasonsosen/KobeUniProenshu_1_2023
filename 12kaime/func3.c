// func3.c
#include <stdio.h>
#include <stdlib.h> // 乱数生成のために必要

void roll_a_die(void){
    printf("%d\n", rand()%6+1); //randはランダムな整数を出力する関数．6で割った余りは0から5なので，1を足して1から6にする．
    return; // これは書かなくても良い．
}

int main(void){
    int i;
    for (i=0;i<10;i++){
    	roll_a_die();
	}
    return 0;
}
