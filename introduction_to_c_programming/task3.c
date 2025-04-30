#include <stdio.h>
#include <ctype.h>

int main (){
    char c;

    if (isupper(c)){

        printf("Upper\n");

    }
    else if (islower(c)){

        printf("Lower\n");
    }
    else{
        printf("Not a letter\n");
    }

}