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
	return (0);
}

int _printf(const char *format, ...)
{
	int i = 0;
	va_list ptr;

	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				_putchar('%');
			check(ptr, format[i]);
		}
		else
			_putchar(format[i]);
			i++;
	}
	va_end(ptr);
}
int main(void)
{
	_printf("amine and panda\n");
	_printf("%s\n", "amine and panda");
	_printf("%c\n", 'a');
	_printf("%d\n", 7);
	_printf("%%\n");
}
