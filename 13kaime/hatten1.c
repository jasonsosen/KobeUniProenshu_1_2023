// hatten1.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int youshi[ ][ ];
	// ビンゴゲームの用紙と youshi[][] の関係は下のようになっているとする．
	//  -------------------------------
	//  | youshi[0][0] | youshi[0][1] | 
	//  -------------------------------
	//  | youshi[1][0] | youshi[1][1] |
	//  -------------------------------
	int check[2][2] = {{0,0},{0,0}}; // まだチェックされていないところは0にしておく．チェックされたら1にする．
	int suuji;
	int ransuu;
	int i, j, k;

	do{//0と10の間の数字が入力されるまで繰り返す．同じ数字があったかどうかはチェックしない．
		printf("左上の数を入力してください\n");
		scanf("%d", &suuji);
	}while(suuji>10 || suuji<0);
	youshi[0][0]=suuji;

	do{//0と10の間の数字が入力されるまで繰り返す．同じ数字があったかどうかはチェックしない．
		printf("右上の数を入力してください\n");
		scanf("%d", &suuji);
	}while(suuji>10 || suuji<0);
	youshi[ ][ ]=suuji;

	do{//0と10の間の数字が入力されるまで繰り返す．同じ数字があったかどうかはチェックしない．
		printf("左下の数を入力してください\n");
		scanf("%d", &suuji);
	}while(suuji>10 || suuji<0);
	youshi[ ][ ]=suuji;

	do{//0と10の間の数字が入力されるまで繰り返す．同じ数字があったかどうかはチェックしない．
		printf("右下の数を入力してください\n");
		scanf("%d", &suuji);
	}while(suuji>10 || suuji<0);
	youshi[ ][ ]=suuji;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("youshi[%d][%d]=%d\n", i,j,youshi[i][j]);
		}
	}


	i = 0;
	while(1){//ゲームが終わるまで繰り返す．
		ransuu = rand()%10;//これまで出たものと同じ乱数が出ても気にしないことにする．
		printf("%d の番号が出ました\n", ransuu);
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				if(youshi[ ][ ]==ransuu){
					check[ ][ ]=1;
				}
				printf("check[%d][%d]:%d\n", j,k,check[j][k]);
			}
		}
		if(check[0][0]+check[0][1]==2){
			printf("上の行が揃いました \n");
			    // ループを終了して次の処理に移る．
		}
		if(check[1][0]+check[1][1]==2){
			printf("下の行が揃いました \n");
			    // ループを終了して次の処理に移る．
		}
		if(check[0][0]+check[1][0]==2){
			printf("左の列が揃いました \n");
			    // ループを終了して次の処理に移る．
		}
		if(check[0][1]+check[1][1]==2){
			printf("左の列が揃いました \n");
			    // ループを終了して次の処理に移る．
		}
		i=i+1;
	}

	return 0;
}
