#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_prin_int - print the nb
 *@n: the n to print
 *Return: returns
 */

int _prin_int(int n)
{
	int c = 0;

	if (n < 0)
	{
		c += _putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		c += _prin_int(n / 10);
		c += _prin_int(n % 10);
	}
	else
		c += _putchar(n + '0');
	return (c);
}
