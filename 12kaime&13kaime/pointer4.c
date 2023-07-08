
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("交換前： x = %d, y = %d\n", x, y);
    
    swap(&x, &y);  // 変数のアドレスを関数に渡す
    
    printf("交換後： x = %d, y = %d\n", x, y);
    
    return 0;
}