#include <stdio.h>

int main(void){
  double x, y, z, nx, ny, nz, a, b;
  x = 99;
  y = 1;
  z = 0;
  a = 0.01;
  b = 0.01;

  void update(   ){
      // x, y, z を更新する式を書く．
      return;
  }
    
  for(i=0;i<30;i++){// for や while を使って，下の部分を繰り返す．

    // 次の日になるので「今日の値」を「明日の値」に書き換える．
    update( );
  }
  
  printf("感染したことがない人は %lf 人\n", x);
  printf("感染している人は %lf 人\n", y);
  printf("回復した人は %lf 人\n", z);
  return 0;
}