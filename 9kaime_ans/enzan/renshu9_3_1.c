//教科書 List2-2
#include <stdio.h>
int main(void){
  int no;
  printf("整数を入力して下さい：");
  scanf("%d", &no);
  printf("最下位桁は%dです\n", no % 10);
  return 0;
}
