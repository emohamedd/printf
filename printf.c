#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * _printf - print character
 * @format: the character to print
 * Return: returns
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int c = 0;
	va_list ptr;

	if (format == NULL)
		return (-1);

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
			c += _putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (c);
}
