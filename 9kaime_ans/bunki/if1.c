//if1.c
#include <stdio.h>

int main(void){
  int a, b, c, d, e, f;
  printf("a, b, c, d, e, f の値をこの順番に入力してください.\n");
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
  
  if(a*d-b*c==0){
    // 解の表示は ()/() のような分数の形でも良いですし，浮動小数点でも良いです．
    // 変数が int 型なので，計算結果を浮動小数点にしたい場合には
    // (double) を使ってint型変数を double 型に変換します．
    printf("解が一意に定まりません．");
  }
  else{
    printf("x = (%d)/(%d), y = (%d)/(%d)\n", e*d-b*f, a*d-b*c, a*f-e*c, a*d-b*c);
    printf("x = %lf, y = %lf\n", (double)(e*d-b*f)/(a*d-b*c), (double)(a*f-e*c)/(a*d-b*c));
  }
  
  return 0;
}
