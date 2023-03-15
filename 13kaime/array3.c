//array3.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    // ここから下は array2.c の内容．練習問題1に合わせて書き換えてください．
    int r[10];
	int i;
	for(i=0;i<10;i++){
    	r[i]=rand()%100;
	}
    // ここまで array2.c の内容
    
    for(i=3;i<=20;i++){
     	r[i] = (r[i-1]+   ) / ;
    }
    
    printf("%d\n",r[19]); // 番号は 0 から始まるので，r[19] が20番目．
    return 0;
}
