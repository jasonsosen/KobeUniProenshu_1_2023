//pointer1.c
#include<stdio.h>

int main() {
   int x = 10; // xという名前の整数型変数を作成、10を代入する
   int *p; // ポインタ変数pを作成

   p = &x; // xのアドレスをpに代入
   
   printf("%d\n", *p); // ポインタpが指している値（xの値）を出力
   return 0;
}