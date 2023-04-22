#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * _print_octal - convert n to octal
 * @n: the n to convert
 * Return: returns
 */

int _print_octal(unsigned int n)
{
	char *octal = convert_any(n, 8, 0);

	return (_print_string(octal));
}
