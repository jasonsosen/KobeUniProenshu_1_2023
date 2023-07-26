//homework_q2.c
#include <stdio.h>

//全生徒の成績の合計を計算する関数
int calc_total_score(int scores[], int n){
    int i;
    int total = 0;

    for(i = 0; i < n; i++) {
        total += scores[i]; // 'total +='は''total ='total +'と同等
    }
    return total;
}

//全生徒の成績の平均を計算する関数
double calc_avg_score(int scores[], int n){
  
    int total = calc_total_score(scores, n); 
    // 関数の内部で他の関数（calc_total_score）を呼び出し、全生徒の成績の合計を取得
    return (double)total / n;                
     // '(double)total / n'とは、totalをdouble型にキャストしてからnで割ることで、
    // 結果は浮動小数点数（double型）になることを意味します。
}

int main(void){
    int scores[] = {80, 85, 78, 90, 88, 76, 93, 87, 74, 91};
    int n = sizeof(scores) / sizeof(scores[0]);

    // calc_total_score関数を使って全生徒の成績の合計を計算し、表示します
    printf("Total Score: %d\n", calc_total_score(scores, n));
    // calc_avg_score関数を使って全生徒の成績の平均を計算し、表示します
    printf("Average Score: %lf\n", calc_avg_score(scores, n)); // 平均成績を出力

    return 0;
}
