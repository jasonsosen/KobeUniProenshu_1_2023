//scope1.c
#include <stdio.h>

int main(void){
        int j;
        for(j=0;j<3;j++){
                int i;
                i = 2;
                printf("%d\n", i+j);
        }

        printf("%d\n", i);
        return 0;
}
