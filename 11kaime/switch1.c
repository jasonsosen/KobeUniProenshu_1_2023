// switch1.c
#include <stdio.h>

int main(void){
	int a = 2;
	switch (a){
		case 1:
			printf("a=1\n");
		case 2:
			printf("a=2\n");
		case 3:
			printf("a=3\n");
		default:
			printf("a>3\n");
	}
	return 0;
}
