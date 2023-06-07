//scope2.c
#include <stdio.h>
#include <stdlib.h> // 乱数生成のために必要

int roll_a_die(void){
        return rand()%6+1; 
}

void count6(){
        int num=0;
        num++;
        printf("num=%d\n", num);
    	return;
}

int main(void){
        int i, d;
        for (i=0;i<30;i++){
                d = roll_a_die();
            	printf("%d\n", d);
                if(d==6){
                        count6();
                }
        }
        return 0;
}
