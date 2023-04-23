#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * _small_hexa - convert n to hexa
 * @n: the n to convert
 * Return: returns
 */

int _small_hexa(unsigned int n)
{
	char *shexa = convert_any(n, 16, 1);
	int counter = 0;

	counter += _print_string(shexa);
	return (counter);
}
