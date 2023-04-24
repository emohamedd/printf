#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 *_putnbr - convert any version long int to base 2 8 10 16
 *@n: the number to convert
 *@base: base to convert into
 *Return: return nbr at the end
 */

int _putnbr(long int n, int base)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		_putnbr(n / base, base);
		_putnbr(n % base, base);
	}
	else
		_putchar(n + '0');
	return (n);
}
