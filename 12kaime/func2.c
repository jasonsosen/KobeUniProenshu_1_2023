//func2.c
#include <stdio.h>

double area(double x, double y){// 引数は「,」で区切って並べる．全ての変数に型を書く．
	return x*y;
}

int main(void){
	double x,y;
	x = 2.0;
	y = 3.0;

	printf("area:%lf \n", area(x, y));

	return 0;
}
