#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <unistd.h>



#define BUFFER 1024


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
#endif
