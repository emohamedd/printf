#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 *convert_any2 - convert any version unsigned long int base 2 8 10 16
 *@n: the number to convert
 *@base: base to convert into
 *@lowc: case if hexa need to be low
 *Return: return nbr at the end
 */

char *convert_any2(unsigned long int n, int base, int lowc)
{
	const char *digits = lowc ? "0123456789abcdef" : "0123456789ABCDEF";
	static char buffer[50];
	char *p = buffer + sizeof(buffer) - 1;
	*p = '\0';

	do {
		*--p = digits[n % base];
		n /= base;
	} while (n != 0);

	return (p);
}
