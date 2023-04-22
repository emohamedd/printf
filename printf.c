#include "main.h"
/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * _printf - print character
 * @format: the character to print
 * Return: returns
 */

int _printf(const char *format, ...)
{
	va_list args;
	int c = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				c++;
			}
			else
			{
				c += check(args, *format);
			}
		}
		else
		{
			_putchar(*format);
			c++;
		}
		format++;
	}
	va_end(args);

	return (c);
}
