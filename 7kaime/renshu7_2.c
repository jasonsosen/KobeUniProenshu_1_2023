#include  <stdio.h>
int main(void){
  double pi;
  printf("円周率を入力して下さい：");
  scanf("%lf", &pi);
  printf("円周率は%.2fです\n", pi);
  return 0;
}