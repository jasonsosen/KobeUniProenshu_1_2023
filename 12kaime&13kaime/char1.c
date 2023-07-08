// char1.c
#include <stdio.h>

int main(void){
	char c = 'a'; //c という文字を保存する変数に a という文字を入れた．
	char d[4] = "abc"; // d という文字の配列に abc という文字列を入れた．
	char e[] = "abcdef"; // 大きさを指定しなければ，自動的に調整してくれる．

	printf("%s %s \n", d, e);
}
