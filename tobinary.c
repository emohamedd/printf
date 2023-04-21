#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_tobinary - convert dec to bin
 *@x: the number that get converted to binary
 *Return: binary
 */

long _tobinary(unsigned int x)
{
	long bin = 0;
	int r, i = 1;

	while (x != 0)
	{
		r = x % 2;
		x /= 2;
		bin += r * i;
		i *= 10;
	}

	long binary = 0;

	while (bin != 0)
	{
		binary = binary * 10 + (bin % 10);
		bin /= 10;
	}
	while (binary != 0)
	{
		_putchar(binary % 10 + '0');
		binary /= 10;
	}


	return (bin);
}
