//array1.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int y   ;//y の値を入れておくための配列を定義．大きさは44100とすること．
    int i;
    int ny;
    
    for(i=0;i<100;i++){
        y[] = rand()%200;//最初の 100 個は乱数で決める．
    }
    
    for(;i<44100;i++){//1秒間分のギターの音のデータを作成する．
        y[] = (y[]+y[])/2;
    }
    
    for(i=0;i<44100;i++){
        printf("%d\n", y[]);
    }
    
    return 0;
}
