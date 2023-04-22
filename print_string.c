#include "main.h"

/* BY EMOHAMEDD AND ABDELGHNI HAMANAR*/

/**
 *_print_string - print character
 *@s: the string to print
 *Return: returns
 */

int _print_string(char *s)
{
    int i = 0;

    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}
