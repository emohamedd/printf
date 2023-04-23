#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * _big_s - convert n to octal
 * @s: our string contains nonprintable char
 * Return: returns
 */


int _big_s(char *s)
{
	int i, counter = 0;
	char *res;

	if (!s)
		return (_print_string("(nil)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_print_string("\\x");
			counter += 2;
			res = convert_any(s[i], 16, 0);
			if (!res[1])
				counter += _putchar('0');
			counter += _print_string(res);
		}
		else
			counter += _putchar(s[i]);
	}
	return (counter);
}
