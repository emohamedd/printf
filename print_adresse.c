#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * _print_adresse - print adresse
 * @n: variable to print adresse
 * Return: returns
 */

int _print_adresse(unsigned long int n)
{
	char *s;
	int counter = 0;


	if (!n)
		return (_print_string("nil"));

	s = convert_any(n, 16, 1);
	counter += _print_string("0x7ffe");
	counter += _print_string(s);

	return (counter);
}
