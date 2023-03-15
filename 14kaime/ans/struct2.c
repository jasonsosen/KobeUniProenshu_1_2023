// struct2.c
#include <stdio.h>
#include <string.h>

typedef struct{
    char namae[50];
    char bangou[8];
    int gakunen;
    double height;
} student;

int main(void){
    student stu;
    student uribo;
    strcpy(stu.namae,"uriko");//文字列は（配列なので） stu.namae = "uriko" のように代入できないことに注意．
    strcpy(stu.bangou,"123456t");
    stu.gakunen=1;
    stu.height=100;

    uribo = stu;
    strcpy(uribo.namae,"uribo");//文字列は（配列なので） stu.namae = "uriko" のように代入できないことに注意．
    
    
    printf("学籍番号 %s の学生 %s の学年は %d です．", stu.bangou, stu.namae, stu.gakunen);
    printf("学籍番号 %s の学生 %s の学年は %d です．", uribo.bangou, uribo.namae, uribo.gakunen);
    return 0;
}
