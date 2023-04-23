#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 * get_flags - turns flags if _printf find
 * @s: char to hold the flag
 * @t: pointer to the struct flag
 * Return: 1
 */

int get_flags(char s, flags_t *t)
{
	int i = 0;

	switch (s)
	{
		case '+':
			t->plus = 1;
			i = 1;
			break;
		case ' ':
			t->space = 1;
			i = 1;
			break;
		case '#':
			t->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
