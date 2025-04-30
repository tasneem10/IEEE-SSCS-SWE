#include <stdio.h>

void _putchar(char c){
    write (1, &c,1); // 1:stdout, &c:character, 1:#bytes 
}

int main (){
    return 0;
}