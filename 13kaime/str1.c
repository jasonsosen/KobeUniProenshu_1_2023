//str1.c
#include <stdio.h>
#include <string.h>

int main(void){
	char c[]="abc";
	char d[]="def";
    strcpy(c, d);
	printf("%s\n", c);
    return 0;
}
