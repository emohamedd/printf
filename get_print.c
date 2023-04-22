#include "main.h"


/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *get_print - return function
 *@s: holde flags
 *Return: return function to the matching function
 */


int (*get_print(char s))(va_list, flag_s *)
{
	phand arr[] = {
		{'c', _putchar},
		{'s', _print_str},
		{'\0', NULL}
	};

	int flags = sizeof(arr) / sizeof(phand);

	int i;

	for (i = 0; i < flags; i++)
	{
		if (arr[i].c == s)
			return (arr[i].f);
	}

	return (NULL);
}
