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

int _printf(const char *format, ...);
int check(va_list list, char c);
int _putchar(char c);
int _prin_str(char *s);
int _prin_int(int n);
char *convert_any(unsigned long int nbr, int base, int low);
int _print_binary(unsigned long int n);
int _print_octal(unsigned long int n);
int _print_s_hexa(unsigned long int n);
int _print_b_hexa(unsigned long int n);
#endif
