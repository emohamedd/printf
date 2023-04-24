#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 *convert_any - convert any version long int to base 2 8 10 16
 *@n: the number to convert
 *@base: base to convert into
 *@lowc: case if hexa need to be low
 *Return: return nbr at the end
 */

char *convert_any(long int n, int base, int lowc)
{
	const char *digits = lowc ? "0123456789abcdef" : "0123456789ABCDEF";
	static char buffer[50];
	char sign = 0;
	int nbr = n;
	char *p = buffer + sizeof(buffer) - 1;
	*p = '\0';

	if (nbr < 0)
	{
		n = -nbr;
		sign = '-';
	}

	do
	{
		*--p = digits[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--p = sign;

	return (p);
}
