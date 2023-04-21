#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_hexa - print character
 *@format: the character to print
 *Return: returns
 */

int  _hexa(unsigned long n, char *b)
{
	int c = 0;

	if (n >= 16)
	{
		c += _hexa(n / 16, b);
		c += _hexa(n % 16, b);
	}
	else
		c += _putchar(b[n]);
	return (c);

}
