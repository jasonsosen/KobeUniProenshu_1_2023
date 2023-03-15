//homework1.c
#include <stdio.h>

void update(   ){
    // x, y, z を更新する式を書く．
    double nx, ny, nz;
    nx = ;
    ny = ;
    nz = ;
     = nx;// x に nx の値を代入．
     = ny;// y に ny の値を代入．
     = nz;// z に nz の値を代入．
    return;
}

int main(void){
  int i;
  double x, y, z, nx, ny, nz, a, b;
  x = 99;
  y = 1;
  z = 0;
  a = 0.001;
  b = 0.01;
    
  for(i=0;i<30;i++){

    // 次の日になるので「今日の値」を「明日の値」に書き換える．
    update( );
  }
  
  printf("感染したことがない人は %lf 人\n", x);
  printf("感染している人は %lf 人\n", y);
  printf("回復した人は %lf 人\n", z);
  return 0;
}
