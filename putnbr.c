#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_putnbr - print the nb
 *@n: the n to print
 *Return: returns
 */

void _putnbr(int n)
{
	int c = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		_putnbr(n / 10);
		_putnbr(n % 10);
	}
	else
		_putchar(n + '0');

}
