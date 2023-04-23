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
	return (0);
}
