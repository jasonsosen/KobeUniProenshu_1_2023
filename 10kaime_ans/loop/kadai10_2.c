//kadai10_2.c
//解答例
#include <stdio.h>

int main(void){
	double x, y, z, w, nx, ny, nz, nw, a, b;
	int i;
	x = 99;
	y = 1;
	z = 0;
	w = 0;
	a = 0.001;
	b = 0.01;

	for(i=0;i<30;i++){// for や while を使って，下の部分を繰り返してみましょう．
		nx = x - a*x*y;
                nw = w + a*x*y - b*w - (1-b)*w;
		ny = y +(1-b)*w - b*y;
		nz = z + b*y + b*w;

		// 次の日になるので「今日の値」を「明日の値」に書き換える．
		x = nx;
		w = nw;
		y = ny;
		z = nz;
	}

	printf("感染したことがない人は %lf 人\n", x);	
	printf("潜伏期間中の人は %lf 人\n", w);
	printf("感染している人は %lf 人\n", y);
	printf("回復した人は %lf 人\n", z);
        //printf("総和は %f 人\n", x + y + z + w);
        //printf("総和は %f 人\n", nx + ny + nz + nw);
	return 0;
}
