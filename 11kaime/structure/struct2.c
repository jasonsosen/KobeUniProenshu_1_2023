// struct2.c
#include <stdio.h>
#include <string.h>

struct seiseki{
    int test; //試験の得点
    int report; //レポートの得点
    int attend[3]; //出席の有無（出席ならば1，欠席ならば0）
};

int main(void){
    double attend_score; //出席点（attendの平均をとり，満点が100点となるように調整）
    struct seiseki prog1;
    prog1.test = 80; 
    prog1.report = 69;
    prog1.attend[0] = 1; //出席ならば1
    prog1.attend[1] = 0; //欠席ならば0
    prog1.attend[2] = 1;
    attend_score = (double)100*(prog1.attend[0]+prog1.attend[1]+prog1.attend[2])/3; 
    printf("プログラミング演習Iの成績：\n");
    printf("総合得点は%d点です．",(int) (prog1.test+prog1.report+attend_score)/3);
    return 0;
}
    