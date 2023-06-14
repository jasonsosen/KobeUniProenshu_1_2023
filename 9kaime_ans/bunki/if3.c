#include <stdio.h>

int main(void){
	int n;
	printf("年齢を入力してください\n");
	scanf("%d", &n);

	if(n<7){
		printf("0 yen\n");
	}else if(n<13){
		printf("110 yen\n");
	}else{
		printf("220 yen\n");
	}

	return 0;
}
