//kadai11_2.c
#include <stdio.h>
#include <stdlib.h>

struct {
    int 
    int 
} 

int main() {
    int N = 0; //ノード（頂点）の数
    double p; //ノード間にエッジ（辺）を引く確率
    double randomValue; //乱数
    int max_nodes = 50; //ノード（頂点）の最大数
    int num_edge = 0; // エッジ（辺）の数
    Edge edges[max_nodes * (max_nodes - 1) / 2];

    printf("頂点数: ");
    
    printf("辺を作る確率: ");
    

    for (int i = 0; i < N; i++) {
        for {
            randomValue = (double)rand() / RAND_MAX; //このようにすると0から1の乱数が生成される

            if (randomValue < p) {
                
                
                
            }
      }
    }

    // (以下はオプション課題で利用，修正不要) 辺の情報をテキストファイルに出力
    FILE* file = fopen("kadai11_2.txt", "w");
    if (file != NULL) {
    for (int i = 0; i < num_edge; i++) {
        printf("%d %d\n", edges[i].source, edges[i].destination);
        fprintf(file, "%d %d\n", edges[i].source, edges[i].destination);
    }
    fclose(file);
    }
    return 0;
}