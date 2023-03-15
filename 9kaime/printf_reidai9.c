#include <stdio.h>
int main(void) {
   printf("%d\n", 10); //例１
   printf("%x\n", 10); //例２
   printf("%.3f\n", 3.1415); //例３
   printf("10を10進数で表示：%d\n",10); //例４
   printf("10を16進数で表示：%x\n",10); //例５
   printf("10を10進数で表示すると%dで，16進数で表示すると%xです\n", 10, 10); //例６
   return 0;
}