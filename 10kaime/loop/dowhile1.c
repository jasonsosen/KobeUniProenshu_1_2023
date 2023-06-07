//dowhile1.c
#include <stdio.h>

int main(void){
	int i;
	i=11;
	while(i<10){
		printf("%d\n",i);
		i++;
	}

	i=11;
	do{
		printf("%d\n",i);
		i++;
	}while(i<10);

	return 0;
}
