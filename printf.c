#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_printf - print character
 *@format: the character to print
 *Return: returns
 */

int check(va_list list, char c)
{
	if (c == 'c')
		return (_putchar(va_arg(list, int)));
	else if (c == 's')
		return (_putstr(va_arg(list, char *)));
	else if (c == 'd' || c == 'i')
		return (_putnbr(va_arg(list, int)));
	else if (c == 'b')
		return (_tobinary(va_arg(list, long)));
	return (0);
}

int _printf(const char *format, ...)
{
	int i = 0;
	int c = 0;
	va_list ptr;

	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			c += _putchar('%');
			c += check(ptr, format[i]);
		}
		else
			c+= _putchar(format[i]);
			i++;
	}
	va_end(ptr);
	return (c);
}
int main(void)
{
	_printf("amine and panda\n");
	_printf("%s\n", "amine and panda");
	_printf("%c\n", 'a');
	_printf("%d\n", 7);
	_printf("%%\n");
	_printf("%b\n", 98);
}
