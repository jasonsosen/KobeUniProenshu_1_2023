#include <stdio.h>
int main(void){
  int a = 12345, b = 6;
  int amari;
  amari = a - (a/b)*b;
  printf("%dを%dで割ったあまりは%dです．\n", a, b, amari);
  return 0;
}
