#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <unistd.h>

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * struct flags - contains flags
 * @plus: plus flag
 * @space: space flag
 * @hash: hash flag
 * Return: returns
 */



typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag_s;


/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * struct printfhandler - contains flags
 * @c: format special
 * @f: point u to the correct function
 * Return: returns
 */


typedef struct printfhandler
{
	char c;
	int (*f)(va_list ap, flag_s *f);
} phand;




int my_flags(char s, flag_s *f);
int _printf(const char *format, ...);
int _print_str(va_list l, flag_s *f);



int _putstr(char *s);
int _putchar(char c);

int get_flag(char s, flag_s *f);
int (*get_print(char s))(va_list, flag_s *);


#endif
