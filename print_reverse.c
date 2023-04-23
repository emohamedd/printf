#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_print_reverse - print reverse string
 *@s: the string we reverse
 *Return: return nbr at the end
 */

int _print_reverse(char *s)
{
	int i = 0, len, len2, counter = 0;
	char temp;

	len = 0;
	len2 = 0;

	while (s[len] != '\0')
		len++;

	len2 = len;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len2];
		s[len2--] = temp;
	}

	counter += _print_string(s);

	return (counter);
}
