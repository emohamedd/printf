#include "main.h"
/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_unsigned_int - print unsigned int
 *@n: the n to print
 *Return: returns
 */

int _unsigned_int(unsigned int n)
{
	char *ui = convert_any(n, 10, 0);

	return (_print_string(ui));
}
