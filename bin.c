#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * _print_binary - print character
 * @n: the n to binary
 * Return: returns
 */

int _print_binary(unsigned int n)
{
	char *bin = convert_any(n, 2, 0);

	return (_print_string(bin));
}
