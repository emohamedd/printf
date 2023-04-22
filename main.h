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
#endif
