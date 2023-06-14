#include<stdio.h>
int main(void){
    int x, y;
    printf("変数x:"); scanf("%d",&x);
    printf("変数y:"); scanf("%d",&y);
    printf("%d", ((x-y)<0) ? (x+y)*3 : (x%y));
    return 0;
}
