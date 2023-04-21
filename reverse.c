#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_reverse - print character
 *@s: the s to print reversly
 *Return: returns
 */

int _reverse(char *s)
{
	int i = 0, j;

	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
