#include <stdio.h>
#include <unistd.h>

void _putchar (char c){

    write (1, &c, 1);
}

int main(){
    for(char c = 'a'; c<='z'; c++){
        if (c == 'q'){

            continue;
        }

    _putchar (c);

    }

    for(char c = 'Z'; c>='A'; c--){
        if (c == 'Q'){

            continue;
        }
    _putchar (c);

        }

    _putchar ('\n');    

    return 0;
}