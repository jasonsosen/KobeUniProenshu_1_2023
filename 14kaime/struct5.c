//struct5.c
#include <stdio.h>

typedef struct{//ある時刻，ある場所における気温を保存する構造体
    double kion;//気温
    double ame;//降水量
    double hare;//日照時間
} data;

double mean(d[], n){//気温の平均値を求めたい．d[] を構造体の配列，n をその大きさとする．
    int i;
    double mean;
    mean = 0.0;
    for(i=0;i<n;i++){
        mean = mean + ;
    }
    mean=mean/i;//日照時間が8時間より長い日のみにする場合は，そのような日が何日あったかを数える必要がある．
    
    return mean;
}

int main(void){
    int i;
    int n=366;
    data dat[366];
    double d1, d2, d3;
    for(i=0;i<n;i++){
        scanf("%lf,%lf,%lf", &d1, &d2, &d3);//入力は標準入力からとしておき， < を使う．
        dat[i].kion = d1;
        dat[i].ame = d2;
        dat[i].hare = d3;
    }
    
    printf("%lf \n", mean(dat, n));
    return 0;
}
