//array4.c
#include <stdio.h>
#include <stdlib.h>

int inner_prod(int u[], int v[], int n){ //配列は実質的にポインタとして渡される．配列のサイズも教えておく．
	int i, ip;
	ip = 0;
	for(i=0;i<n;i++){
		ip = ip + u[i]*v[i];
	}
	u[0]=u[0]+1; //内積を計算した後，１つ目のベクトルをうこし書き換えてみる．
	return ip;
}

void rand_vec(int *r, int n){ //このように書いてもよい．
	int i;
	for(i=0;i<n;i++){
		r[i]=rand()%10;
	}
}

int main(void){
	int r[3], s[3];
	rand_vec(r, 3); //rを乱数で初期化
	rand_vec(s, 3); //sを乱数で初期化
	printf("r: %d %d %d\n", r[0],r[1],r[2]);
	printf("s: %d %d %d\n", s[0],s[1],s[2]);

	printf("%d\n", inner_prod(r,s,3));

	printf("r: %d %d %d\n", r[0],r[1],r[2]); //書き換えられたので，最初の表示と少し変わる．
	printf("s: %d %d %d\n", s[0],s[1],s[2]);

	return 0;
}
