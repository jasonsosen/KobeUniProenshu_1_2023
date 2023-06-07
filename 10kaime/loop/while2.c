//while2.c
#include <stdio.h>

int main(void){
	double x, y, z, nx, ny, nz, a, b;
	int day;
	x = 99;
	y = 1;
	z = 0;
	a = 0.001;
	b = 0.01;

	day = 0;
	while(y<50){
		nx = x - a * x * y;
		ny = y + a * x * y - b * y;
		nz = z + b * y;

		// 次の日になるので「今日の値」を「明日の値」に書き換える．
		x = nx;
		y = ny;
		z = nz;
		day++;
	}

	printf("感染している人が50人を超えるのは %d 日目です．\n", day);
	return 0;
}
