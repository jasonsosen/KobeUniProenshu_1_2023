#include <stdio.h>

void update(double* x, double* y, double* z, double a, double b){
    // この関数は 'double' 型のポインタを引数として取ります。このため、関数内での変更は、
    // ポインタが指す元の変数に直接影響します。'*' 演算子は間接参照演算子と呼ばれ、
    // ポインタが指す値にアクセスします。

    double nx,ny,nz;
    nx = *x - a * *x * *y; // 未感染者の数を更新します。'*x' はポインタ 'x' が指す値（元の変数）にアクセスします。
    ny = *y + a * *x * *y - b * *y; // 感染者の数を更新します。
    nz = *z + b * *y; // 回復者の数を更新します。
    *x = nx;
    *y = ny;
    *z = nz;

    // ここでの '*x', '*y', '*z' への変更は main 関数内の 'x', 'y', 'z' に影響します。
    // これは、ポインタがこれらの変数のアドレスを保持しているためです。
    return;
}

int main(void){
  int i;
  double x, y, z, a, b;
  x = 99;
  y = 1;
  z = 0;
  a = 0.01;
  b = 0.01;

  for(i=0;i<30;i++){
    update(&x, &y, &z, a, b); // 'update' 関数を呼び出すときには、'&' 演算子を使用して変数のアドレスを渡します。
  }
  
  printf("感染したことがない人は %lf 人\n", x);
  printf("感染している人は %lf 人\n", y);
  printf("回復した人は %lf 人\n", z);
  return 0;
}
