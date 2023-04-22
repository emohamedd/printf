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
	else if (c == '%')
		return (_print_percent(va_arg(list, int)));
	return (0);
}
