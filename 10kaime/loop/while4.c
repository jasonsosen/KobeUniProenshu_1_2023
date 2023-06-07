// while4.c
#include <stdio.h>

int main(void){
	int i;
	i=0;
	while(1){// 1 は「条件が成り立っているときの条件式の返り値」．「常に成り立つ」という意味の条件式
		if(i==10){
			break;
		}
		i++;
		if(i>4){
			continue;
		}
		printf("%d\n",i);
	}
	printf("%d\n",i);

	return 0;
}
