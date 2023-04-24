#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 *putnbr - convert any version long int to base 2 8 10 16
 *@n: the number to convert
 *Return: return nbr at the end
 */

int putnbr(int n)
{
	int c;

	if (n == -2147483648)
		c += print("-2147483648");
	if (n < 0)
	{
		c += _putchar('-');
		n = -n;
	}
	if (n >= 0 && n < 10)
		c += _putchar(n + '0');
	else
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	return (c);
}
