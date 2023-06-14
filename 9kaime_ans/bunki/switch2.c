// switch2.c
#include <stdio.h>

int main(void){
  int n;
  printf("7歳未満のときには１，12歳以下のときには2，それ以外のときには3を入力してください\n");
  scanf("%d", &n);
  
  switch(n){
    case 1:
	    printf("0 yen\n");
	    break;
    case 2:
	    printf("110 yen\n");
	    break;
    default:
	    printf("220 yen\n");
  }
  
  return 0;
}
