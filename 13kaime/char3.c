// char3.c
#include <stdio.h>

int main(void){
        char c[] = "あいうえお"; // c という文字の配列に abc という文字列を入れた．ただし，文字列の最後 \0 を入れていない．
        char d[] = "寿限無寿限無五劫の摺り切れ"; // d という文字の配列に abc と文字列の最後 \0 を入れた．

        printf("%s %ld\n", c, sizeof(c));
        printf("%s %ld\n", d, sizeof(d));
}
