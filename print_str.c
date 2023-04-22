#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_prin_str - print character
 *@l: argum from _printf
 *@f: pointer struct flag
 *Return: returns
 */

int _print_str(va_list l, flag_s *f)
{
	char *s = va_arg(l, char *);

	if (!s)
		s = "null";
	return (_putstr(s));
}
