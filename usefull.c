#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * _strlen - Calculate the len of a string
 * @s: string
 *
 * Return: len
 **/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * print - print char
 * @s: string
 *
 * Return: String len
 */

int print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/
/**
 * _put_string - function print string
 *
 * @str: string
 *
 * Return: i
 */

int _put_string(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
