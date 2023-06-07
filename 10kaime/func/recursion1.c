// recursion1.c
#include <stdio.h>

double Chebyshev(int n, double x){
    if(n<1){//n が負の場合も 0 として扱うことにする．
        return ;
    }else if(n==1){
        return ;
    }
    return ;
}

int main(void){
	printf("%lf\n", Chebyshev(3, 0.5));
	return 0;
}
