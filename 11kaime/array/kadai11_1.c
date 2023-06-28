//kadai11_1.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

calcDistance(int x1, int y1, int x2, int y2) {
    double distance = ;
    return distance;
}

int main() {
    int N = 10; //点の数
    int points[N][ ]; // 座標を格納する二次元配列
    int A[N][N]; // 隣接行列を表す二次元配列
    double d; // 2点間距離を格納する変数

    // ランダムに座標を生成
    for (int i = 0;    ;   ) {
        points[i][0] =  ; // x座標 (0 ~ 5)
        points[i][1] =  ; // y座標 (0 ~ 5)
    }

    // 生成した座標を出力
    printf("Generated coordinates:\n");
    for (int i = 0; i < N; i++) {
        printf("Point %d: (%d, %d)\n", i+1, points[i][0], points[i][1]);
    }

    // 隣接行列の作成
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double d = calcDistance(points[i][0], points[i][1], points[j][0], points[j][1]);
            
            if (() && (i != j)){
               
                
            }else{
                
                
            }
        }
    }

    // 隣接行列の表示
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; 　　; 　) {
        for (int j = 0; 　; 　) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // (以下はオプション課題で利用，修正不要) 隣接行列をテキストファイルに出力
    FILE* file = fopen("A.txt", "w");
    if (file != NULL) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                fprintf(file, "%d ", A[i][j]);
            }
        fprintf(file, "\n");
        }
    fclose(file);
    }
    return 0;
}
