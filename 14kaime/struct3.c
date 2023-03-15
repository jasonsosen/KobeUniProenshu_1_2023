// struct3.c
#include <stdio.h>
#include <string.h>

struct student{
    char namae[50];
    char bangou[7];
    int gakunen;
};

int main(void){
    struct student uriko;
    struct student *puriko;
    struct student stu[3];
    
    strcpy(uriko.namae,"uriko");
    strcpy(uriko.bangou,"123456t");
    uriko.gakunen=1;
   
    puriko = &uriko;
    stu[0] = *puriko;
    
    printf("学籍番号 %s の学生 %s の学年は %d です．", stu[0].bangou, stu[0].namae, stu[0].gakunen);
    return 0;
}
