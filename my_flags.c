#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *my_flags - when printf finds flags turned
 *@s: variables contains flag
 *@f: variable pointer to truct flag_s
 *Return: return i
 */


int my_flags(char s, flag_s *f)
{
	int i = 0;


	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
