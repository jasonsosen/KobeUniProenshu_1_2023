//str4.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char c[]="12.3";
	double d=10.0;
    d = d + atof(c);
	printf("%lf\n",d);
    return 0;
}
