#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 *putnbr - convert any version long int to base 2 8 10 16
 *@n: the number to convert
 *Return: return nbr at the end
 */

int putnbr(int n)
{
	int *counter;

	if (n == -2147483648)
	{
		*counter += print("-2147483648");
		return;
	}
	if (n < 0)
	{
		*counter += _putchar('-');
		n = -n;
	}
	if (n >= 0 && n < 10)
		*counter += _putchar(n + '0');
	else
	{
		putnbr(n / 10, counter);
		putnbr(n % 10, counter);
	}
	return (c);
}
