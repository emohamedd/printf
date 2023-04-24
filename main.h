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
/**
 * struct format_t - typedef struct
 *
 * @t: format
 * @f: the function that gona link the checker
 */

typedef struct format_t
{
	char t;
	int (*f)(va_list);
} format;

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

int _printf(const char *format, ...);

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/* fucntion the handles what commes after %*/
/*%s*/
int _print_string(va_list list);
/*%c*/
int _print_char(va_list list);
/* %i %d */
int _print_int(va_list list);
int putnbr(int n);




/* the function that check the % */

int checker(const char *s, va_list list);
int check(const char *s, va_list list, int *i);


/* to convert any type of numbers*/
/* for negativ and positive numbers convert_any1.c*/
/*for positive numbers only*/
char *convert_any2(unsigned long int n, int base, int lowc);


/*putchar handlers*/
int _putchar(char c);
int buffer(char c);

/*usefull functions*/
int _strlen(const char *s);
int print(char *s);
int _put_string(char *str);

#endif
