//array4.c
#include <stdio.h>

int main(void){
	int a[10][10];
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			a[i][j] = i+j;
		}
	}

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\n", a[i][j]);
		}
	}

	return 0;
}
