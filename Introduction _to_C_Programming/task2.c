#include <stdio.h>
#include <unistd.h>

void _putchar (char c){

    write (1, &c, 1);
}

int main(){

    for(int n=0; n<5; n++){
        for(char c = 'a'; c<='z'; c++){

            _putchar (c);

            }
            
            _putchar ('\n');
    }

    return 0;
}