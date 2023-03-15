//while3.c
#include <stdio.h>

int main(void){
	int i;
	i=0;
	while(1){// 1 は「条件が必ず成り立つ，というような意味」
		if(i==5){
			break;
		}
		printf("%d\n",i);
		i++;
	}
	return 0;
}
