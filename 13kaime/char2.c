// char2.c
#include <stdio.h>

int main(void){
        char c[3] = {'a','b','c'}; // c という文字の配列に abc という文字列を入れた．ただし，文字列の最後 \0 を入れていない．
        char d[4] = {'d','e','f','\0'}; // d という文字の配列に abc と文字列の最後 \0 を入れた．

        printf("%s\n", c);
        printf("%s\n", d);
}
