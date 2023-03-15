//struct7.c
#include <stdio.h>

typedef struct{//ある時刻，ある場所における気温を保存する構造体
    double kion;//気温
    double ame;//降水量
    double hare;//日照時間
} data;

void mean(d[], n, *result){//平均値を求め，resultに記録する．
    int i;
    double mkion=0.0, mame=0.0, mhare=0.0;
    
    for(i=0;i<n;i++){
        mkion = mkion +   ;
        mame = ;
        mhare = ;
    }
    mkion=mkion/i;
    mame = ;
    mhare = ;
    
    resultの表す変数の kion に mkionを代入;
    resultの表す変数の ame に mameを代入;
    resultの表す変数の hare に mhareを代入;
    
    return;
}

int main(void){
    int i;
    int n=366;
    data dat[366];
    data result;
    double d1, d2, d3;
    for(i=0;i<n;i++){
        scanf("%lf,%lf,%lf", &d1, &d2, &d3);//入力は標準入力からとしておき， < を使う．
        dat[i].kion = d1;
        dat[i].ame = d2;
        dat[i].hare = d3;
    }
    mean(dat, n, &result);
    printf("平均気温: %lf 平均降水量: %lf 平均日照時間: %lf \n", result.kion, result.ame, result.hare);
    return 0;
}
