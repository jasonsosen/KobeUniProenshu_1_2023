#include <stdio.h>
int main(void){
  int x, y;
  printf("二つの整数を入力せよ．\n");
  printf("整数x："); scanf("%d", &x);
  printf("整数y："); scanf("%d", &y);

  printf("x+y=%d\n", x+y);	//和
  printf("x-y=%d\n", x-y);	//差
  printf("x*y=%d\n", x*y);	//積
  printf("x/y=%d\n", x/y);	//商

  return 0;
}
