#include <stdio.h>

int main(void){
	// a が偶数であったら 2 で割る．
	int a;
	printf("input a \n");
	scanf("%d", &a);

	if (a % 2 == 0){ // { } は無くても良い．
		a = a / 2;
	}

	printf("a = %d \n", a);
	return 0;
}
