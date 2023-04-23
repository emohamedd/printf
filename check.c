#include "main.h"
/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 *check - print character
 *@list: variables params
 *@c: variable char to check
 *Return: returns
 */

int check(va_list list, char c)
{
	if (c == 'c')
		return (_putchar(va_arg(list, int)));
	else if (c == 's')
		return (_print_string(va_arg(list, char *)));
	else if (c == 'd')
		return (_putnbr(va_arg(list, int)));
	else if (c == 'i')
		return (_putnbr(va_arg(list, int)));
	else if (c == 'b')
		return (_print_binary(va_arg(list, int)));
	else if (c == 'o')
		return (_print_octal(va_arg(list, int)));
	else if (c == 'u')
		return (_unsigned_int(va_arg(list, int)));
	else if (c == 'x')
		return (_small_hexa(va_arg(list, int)));
	else if (c == 'X')
		return (_big_hexa(va_arg(list, int)));
	else if (c == 'S')
		return (_big_s(va_arg(list, char *)));
	else if (c == 'r')
		return (_print_reverse(va_arg(list, char *)));
	else if (c == 'p')
		return (_print_adresse(va_arg(list, int)));
	return (0);
}
