//str3.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char c[]="123";
	int d=10;
    d = d + atoi(c);
	printf("%d\n",d);
    return 0;
}
