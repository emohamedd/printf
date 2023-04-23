#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <unistd.h>


#define UNUSED(x) (VOID)(x)
#define BUFFER 1024

/* FLAGS */

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16


/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * struct flags - struct containing flags
 * @plus: flag for '+'
 * @space: flag for ' '
 * @hash: flag for '#'
 * Return: returns
 */


typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;





int _printf(const char *format, ...);
int check(va_list list, char c);
int _putchar(char c);
int check(va_list list, char c);
int _print_string(char *s);
int _putnbr(int n);
char *convert_any(unsigned long int n, int base, int lowc);
int _print_binary(unsigned int n);
int _print_octal(unsigned int n);
int _unsigned_int(unsigned int n);
int _small_hexa(unsigned int n);
int _big_hexa(unsigned int n);
int _big_s(char *s);
int _print_reverse(char *s);
int get_flags(char s, flags_t *t);
int _print_adresse(unsigned long int n);
#endif
