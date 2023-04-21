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
	else if (c == 'x')
		return (_hexa(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (_hexa(va_arg(list, unsigned int), "0123456789ABCDEF"));
	else if (c == 'p')
	{
		_putstr("0x");
		return (_hexa(va_arg(list, unsigned int), "0123456789abcdef") + 2);
	}
	else if (c == 'u')
		return (_putunbr(va_arg(list, int)));
	else if (c == 'o')
		return (_octal(va_arg(list, int)));
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
	_printf("%x\n", 10);
	_printf("%X\n", 10);
	_printf("%p\n", 4565);
	_printf("%u\n", 2458);
	_printf("%o\n", 8);
}
