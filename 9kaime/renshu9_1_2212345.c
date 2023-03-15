#include <stdio.h>
int main(void) {
   printf("2212345\n"); //文字列
   printf("%d\n", 2212345); //10進数
   printf("%f\n", 2212.345); //浮動小数点数（小数点以下第6位まで）　     　 
   printf("%.2f\n", 2212.345); //浮動小数点数（小数点以下第2位まで）
   return 0;
}
