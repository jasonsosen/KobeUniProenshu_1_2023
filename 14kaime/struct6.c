//struct6.c
#include <stdio.h>
#include <string.h>

struct student{
    char namae[50];
    char bangou[7];
    int gakunen;
};

void change_grade(int g, struct student *pstu){
    pstu->gakunen = g;//(*pstu).gakunen と書く代わりに，このように書いてよい．
    return;
}

int main(void){
    struct student uriko;
    struct student *puriko;
    struct student stu[2];
    
    strcpy(uriko.namae,"uriko");
    strcpy(uriko.bangou,"123456t");
    uriko.gakunen=1;
    
    change_grade(2, &uriko);
    printf("%d\n",uriko.gakunen);//2が表示される．
    
    return 0;
}
