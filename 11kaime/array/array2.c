//array2.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int r[10];
	int i;
	for(i=0;i<10;i++){
		r[i]=rand()%100;
	}
	
	for(i=0;i<10;i++){
		printf("%d \n", r[i]);
	}

	return 0;
}
