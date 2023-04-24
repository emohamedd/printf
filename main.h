#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

#define BUFFER_SIZE 1024


/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

int _printf(const char *format, ...);

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/




/* the function that check the % */
int checker(const char *s, va_list list);
int check(const char *s, va_list list, int *i);


/*putchar handlers*/
int _putchar(char c);
int buffer(char c);



/*usefull functions*/
int _strlen(const char *s);
int print(char *s);
int _put_string(char *str);




#endif
