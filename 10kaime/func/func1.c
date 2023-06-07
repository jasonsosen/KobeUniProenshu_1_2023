//func1.c
//func1.c
#include <stdio.h>

double getnx(   ){
      return x - a * x * y;
}

   getny(   ){
      return ;
  }

   getnz(   ){
      return ;
  }

int main(void){
  int i;
  double x, y, z, nx, ny, nz, a, b;
  x = 99;
  y = 1;
  z = 0;
  a = 0.01;
  b = 0.01;


  for(i=0;i<30;i++){// for や while を使って，下の部分を繰り返してみましょう．
    // 次の日になるので「今日の値」を「明日の値」に書き換える．
    x = getnx( ); //a, bが必要になる場合もあるので注意．
    y = getny( ); //a, bが必要になる場合もあるので注意．
    z = getnz( ); //a, bが必要になる場合もあるので注意．
  }

  printf("感染したことがない人は %lf 人\n", x);
  printf("感染している人は %lf 人\n", y);
  printf("回復した人は %lf 人\n", z);
  return 0;
}
