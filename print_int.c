#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * _print_int - function print int handel %d %i
 *
 * @list: list
 *
 * Return: len of number i decimal (c)
 */

int _print_int(va_list list)
{
	int c = 0;

	c = _putnbr(va_arg(list, int), 10);
	return (c);
}
