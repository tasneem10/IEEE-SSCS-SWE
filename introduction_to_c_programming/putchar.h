#ifndef _PUTCHAR_H
#define _PUTCHAR_H

#include <unistd.h>

int _putchar(char c);

#endif

/*
#ifndef _PUTCHAR_H : If _PUTCHAR_H is not defined, continue

#define _PUTCHAR_H : Define _PUTCHAR_H to prevent double inclusion (include guard)

#include <unistd.h> : Needed for using write() inside _putchar

int _putchar(char c); :Declaration (prototype) of your custom _putchar function

#endif: End of the include guard
*/