#include "main.h"

void use_hexa(unsigned char c);

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_nprintable - print the string and cv inprinted to hexa
 *@s: unsigned string
 *Return: returns
 */


char *_nprintable(char *s)
{
	int i = 0;
	char *result = malloc(strlen(s) * 4 + 1);
	char *mystring = result;

	while (*s)
	{
		if (*s < 32 || *s >= 127)
		{
			*mystring++ = '\\';
			*mystring++ = 'x';
			use_hexa(*s);
			mystring += 2;
		}
		else
		{
			*mystring++ = *s;
		}
		s++;
	}

	*mystring = '\0';
	return (result);
}



/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *use_hexa - putchar hexa
 *@c: unsigned string
 *Return: void
 */


void use_hexa(unsigned char c)
{
	const char *hexa = "0123456789ABCDEF";
	_putchar(hexa[c >> 4]);
	_putchar(hexa[c & 0x0F]);
}
