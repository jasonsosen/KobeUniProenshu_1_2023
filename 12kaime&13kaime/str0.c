//str0.c
#include <stdio.h>
#include <string.h>

int main(void){
	char c[]="abc";
	char d[]="defgh";
	char e[]="!!!!!";

	strcpy(c, e);//eの内容をcにコピーしようとしているが，コピーするには c の長さが足りない．
	printf("%s\n", c);
	printf("%s\n", d);
	return 0;
}
