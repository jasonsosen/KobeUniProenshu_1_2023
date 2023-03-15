// struct1.c
#include <stdio.h>

struct rect1{// rect1 という名前の新しい構造体を作った．
        double tate; // この構造体は，3つの double 型変数をまとめたもの．
        double yoko; // 構造体の中の変数の型は異なるものでもよい ．
        double menseki; // また，配列などが含まれていてもよい．
};

typedef struct{// 新しい構造体を作り，rect2 という新しい型として登録した．
        double tate;
        double yoko;
        double menseki;
} rect2; // 名前を後ろに書く．セミコロン ; をつけるのを忘れずに．

int main(void){
        double tate = 2.0;
        double yoko = 3.0;

        struct rect1 r1;//1番目の方法で宣言した型の変数はこのように作る．
        rect2 r2;//2番目の方法で宣言した型の変数を作るときには，struct を書かない．

        r1.tate = tate;
        r1.yoko = yoko;
        r1.menseki = tate*yoko;
        printf("%lf\n", r1.menseki);

        r2.tate = tate;
        r2.yoko = yoko;
        r2.menseki = tate*yoko;
        printf("%lf\n", r2.menseki);
    
        return 0;
}
