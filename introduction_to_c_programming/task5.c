#include <stdio.h>

int _isalpha (char c){

    return (c >='a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
 int main (){

    char c;

    if (_isalpha (c)){
        printf ("%c is alphapetic\n",c);
    }
    else {
        printf ("%c is't alphapetic\n",c);
    }

    return 0;

 }