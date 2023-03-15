#include <stdio.h>

typedef struct{
  double A[3][3]; // 簡単のため，行列は 3x3 とする．
  double b[3]; // 簡単のため，ベクトルは 3 次元とする．
} nnlayer;

double sigma(double x){//relu と呼ばれる活性化関数．
    if(x > 0){
        return x;
    }
    return 0;
}

void func(nnlayer nn, double x[], double f[]){
    // f に sigma(A x + b) を代入．
    int i,j;
    for(i=0;i<3;i++){
	f[i]=0;
    	for(j=0;j<3;j++){
        	f[i]=f[i]+nn.A[i][j]*x[j];
    	}
    }
    for(i=0;i<3;i++){
	f[i] = sigma(f[i]);
    }
    return;
}

int main(void){
    double A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    double b[3]={1,2,3};
    double x[3]={-2,-2,3};
    double f[3];
    int i,j;
    nnlayer nn;
    
    //nn が保持している A や b を，上で宣言した A, b で初期化．
    for(i=0;i<3;i++){
	nn.b[i] = b[i];
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           nn.A[i][j] = A[i][j];
        }
    }
        
    func(nn, x, f);// ニューラルネットワークの計算を実行．
    for(i=0;i<3;i++){
        printf("%lf \n", f[i]);//計算結果を表示．
    }
    
    return 0;
}
