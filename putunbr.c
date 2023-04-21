#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_putunbr - print the nb
 *@x: the n to print
 *Return: returns
 */

int _putunbr(unsigned int x)
{
	char *s = NULL;
	int i = 0, j, c = 0;

	do{
		s = realloc(s, i + 1);
		s[i++] = (x % 10) + '0';
		x /= 10;
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
