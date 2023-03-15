//str2.c
#include <stdio.h>
#include <string.h>

int main(void){
	char c[10]="abc"; //別の文字列を結合しても大丈夫なように，十分大きく取っておく．
	char d[]="def";
    strcat(c, d);
	printf("%s\n", c);
    return 0;
}
