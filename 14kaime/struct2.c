// struct2.c
#include <stdio.h>
#include <string.h>

struct student{
    char namae[50];
    char bangou[8];
    int gakunen;
};

int main(void){
    struct student stu;
    strcpy(stu.namae,"uriko");//文字列は（配列なので） stu.namae = "uriko" のように代入できないことに注意．
    strcpy(stu.bangou,"123456t");
    stu.gakunen=1;
    
    printf("学籍番号 %s の学生 %s の学年は %d です．", stu.bangou, stu.namae, stu.gakunen);
    return 0;
}
