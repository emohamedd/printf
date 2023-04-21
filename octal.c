#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_octal - print the nb
 *@x: the n to print
 *Return: returns
 */

int _octal(unsigned int x)
{
	char *s = NULL;
	int i = 0, j, c = 0;

	do{
		s = realloc(s, i + 1);
		s[i++] = (x % 8) + '0';
		x /= 8;
	} while (x > 0);

	s[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
		c++;
	}

	free(s);
	return (c);
}
