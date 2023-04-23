#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <unistd.h>


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
#endif
