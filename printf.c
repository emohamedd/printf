#include "main.h"
/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * _printf - print character
 * @format: the character to print
 * Return: returns
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int printed = 0;
	char c, *s;

	va_start(arg, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = (char)va_arg(arg, int);
					_putchar(c);
					printed++;
					break;
				case 's':
					s = va_arg(arg, char *);
					while (*s)
					{
						_putchar(*s);
						s++;
						printed++;
					}
					break;
				case '%':
					_putchar('%');
					printed++;
					break;
			}
		}
		else
		{
			_putchar(*format);
			printed++;
		}
		format++;
	}
	va_end(arg);
	return (printed);
}
