#include <stdio.h>
int main(void){
	
	int x;
	double y; 		

	x = 57;		
	y = x + 12.0;
	x = y-x;	

	printf("xの値は%dです\n", x);
   	printf("yの値は%fです\n", y);
   	printf("x+yの値は%fです\n", x+y);	

	return 0; 
} 