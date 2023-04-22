#include "main.h"
/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * _printf - print character
 * @format: the character to print
 * Return: returns
 */

int _printf(const char *format, ...)
{
	int (*ptrfun)(va_list, flag_s *);
	va_list args;
	const char *p;
	flag_s fl = {0, 0, 0};

	int counter = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = format; *p; p++)
	{

		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				counter += _putchar('%');
				continue;
			}

			while (my_flags(*p, &fl))
				p++;

			ptrfun = get_print(*p);
			counter += (ptrfun) ? ptrfun(args, &fl) : _printf("%%%c", *p);

		}
		else
			counter += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (counter);

}
