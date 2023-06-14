// 教科書 List2-3
#include <stdio.h>
int main(void){
  int a, b;
  printf("二つの整数を入力して下さい\n");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);
  printf("aをbで割ると%dあまり%dです\n", a/b, a%b);
  return 0;
}
