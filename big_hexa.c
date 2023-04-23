#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * _big_hexa - convert n to hexa
 * @n: the n to convert
 * Return: returns
 */

int _big_hexa(unsigned int n)
{
	char *shexa = convert_any(n, 16, 0);
	int counter = 0;

	counter += _print_string(shexa);
	return (counter);
}
