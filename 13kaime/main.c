/* int fgetc(FILE *stream); int fputc(int c, FILE *stream);
fgetc() reads the next character from stream and returns it as an unsigned char cast to an int, or EOF on end of file or error. fputc() writes the character c, cast to an unsigned char, to stream. */ 

#include <stdio.h>
int main(int argc, char *argv[]){
    int c;
    while(EOF!=(c=fgetc(stdin))) /* standard input */ 
        fputc(c,stdout); /* standard output */ 
    return 0; 
}
