// homework_q1.c
#include <stdio.h>

void swap(v, w, n){
  int i;
  int u;
  
  for(i=0;i<n;i++){
      u = w[ ];//wの第i成分を u という変数にコピー（バックアップ）しておく
      w[ ] = v[ ];//vの第i成分を wの第i成分に書き込む
      v[ ] = u;//vの第i成分を，u に保存しておいた w の第i成分に置き換える．
  }
    
   return;
}

int main(void){
   int i,j;
   int v  ={1,2};//2次元のベクトルを保存するための，１次元の配列を宣言せよ．
   int w  ={3,4};//2次元のベクトルを保存するための，１次元の配列を宣言せよ．
   swap(v, w, 2);
   printf("%d, %d\n", v[0], v[1]);
   printf("%d, %d\n", w[0], w[1]);
   return 0; 
}
