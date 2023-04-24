#include "main.h"

void binary(unsigned int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
	}
	else
	{
		binary(n / 2);
		binary(n % 2);
	}
}
