#include <stdio.h>
#include <unistd.h>

void _putchar (char c){

    write(1, &c, 1);
}

int main (){

    for (int i=0; i<10; i++){
        _putchar (i + '0'); // to print the integer number instead of character 
    }
    _putchar('\n');
    return 0;
}