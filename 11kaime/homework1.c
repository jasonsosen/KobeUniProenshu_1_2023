//homework1.c
#include <stdio.h>

int main(void){
	double x, y, z, nx, ny, nz, a, b;
	x = 99;
	y = 1;
	z = 0;
	a = 0.01;
	b = 0.01;

	{// for や while を使って，下の部分を繰り返してみましょう．
		nx = x - a * x * y;
		ny = y + a * x * y - b * y;
		nz = z + b * y;

		// 次の日になるので「今日の値」を「明日の値」に書き換える．
		x = nx;
		y = ny;
		z = nz;
	}

	printf("感染したことがない人は %lf 人\n", x);
	printf("感染している人は %lf 人\n", y);
	printf("回復した人は %lf 人\n", z);
	return 0;
}
