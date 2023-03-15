// struct4.c
#include <stdio.h>
#include <string.h>

struct student{
    char namae[50];
    char bangou[7];
    int gakunen;
};

// 構造体の配列 stu を受け取り，それぞれの要素について namae を表示．
void func(struct student stu[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s\n", stu[i].namae);
    }
}


int main(void){
    struct student stu[2];
    
    strcpy(stu[0].namae,"uriko");
    strcpy(stu[0].bangou,"123456t");
    stu[0].gakunen=1;

    strcpy(stu[1].namae,"uribo");
    strcpy(stu[1].bangou,"234567t");
    stu[1].gakunen=2;
    
    func(stu, 2);
    
    return 0;
}
