#ifndef MAIN_H
#define MAIN_H

/* includes the lib we need */
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <math.h>
#include <string.h>

/*containes all the defines */

#define BUFF_SIZE 1024


/* the prototype of all function we use to handle printf */
int _rot13(char *s);
int _reverse(char *s);
int _octal(unsigned int x);
int _putunbr(unsigned int x);
long _tobinary(unsigned int x);
int _putchar(char c);
char _putstr(char *s;
int _putnbr(int n);
int _hexa(unsigned long n, char *b);
int _printf(const char *format, ...);




#endif
