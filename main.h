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
/*%d %i */
int _print_int(va_list list);


/*all kind of base conversion */
/*%b*/
int _print_bin(va_list list);
/*%o*/
int _print_octal(va_list list);
/*%x %X*/
int _print_low_hexa(va_list list);
int _print_big_hexa(va_list list);
/*%u*/
int _print_unsigned_int(va_list list);
/*%r %R*/
int _rev_str(va_list list);
int _rot13(char *s);
int _print_rot13(va_list list);

/* the function that check the % */

int checker(const char *s, va_list list);
int check(const char *s, va_list list, int *i);

/* the function magic to convert any to ASCII */
char *_magic(long int n, int base);

/*putchar handlers*/
int _putchar(char c);
int buffer(char c);

/*usefull functions*/
int _strlen(const char *s);
int print(char *s);
int _put_string(char *str);
char *_to_upper(char *s);
int _is_lower(char c);



#endif
