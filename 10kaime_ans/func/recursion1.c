// recursion1.c
#include <stdio.h>

double Chebyshev(int n, double x){
    if(n<1){//n が負の場合も 0 として扱うことにする．
        return 1;
    }else if(n==1){
        return x; 
    }
    return 2.0*x*Chebyshev(n-1,x)-Chebyshev(n-2,x);
}

int main(void){
	printf("%lf\n", Chebyshev(3, 0.5));
	return 0;
}
