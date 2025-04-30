#include <stdio.h>
#include <unistd.h>

void _putchar(char c){

    write (1, &c, 1);
}

int main (){

    for (int i=0; i<8; i++){

        for (int j=i+1; j<9; j++){

            for (int k=j+1; k<10; k++ ){

            _putchar(i+'0');
            _putchar(j+'0');
            _putchar(k+'0');
            _putchar(',');
            _putchar(' ');

            }

        }

    }

    _putchar('\n');
    return 0;
}