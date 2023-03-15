// matome2.c
#include<stdio.h>
#include<math.h> // 平方根など，数学の関数を使うときに，準備として実行する．コンパイルするときには -lm をつける．

int main(void){
	int a;
	double b;
	printf("整数を入力してください\n"); // 「画面に文字列を表示」という処理を行う．
	scanf("%d", &a); // 「入力を受け付ける」という処理を行う．
	b = sqrt(a); // sqrt: 平方根を計算し，その計算結果を返す．
	printf("%d の平方根は %f です．\n", a, b); // 「画面に文字列を表示」という処理を行う．
	return 0;
}
