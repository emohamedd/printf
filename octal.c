#include "main.h"

void ocatal(unsigned int n, unsigned int base)
{
	if (n < base)
		_putchar(n + '0');
	else
	{
		octal(n / base, base);
		octal(n % base, base);
	}
}

// hadi a panda hadir biha %u %o hatbdl lih aha la basse matalan %o
// hadir liha la base 8 w %u hadir liha la  base 10


void x_X(unsigned int n, int upp)
{
	char *base;

	if (upp)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n < 16)
		_putchar(base[n]);
	else
	{
		x_X(n / 16, upp);
		x_X(n % 16, upp);
	}
}

// hadi a sat dyal x w X ela hassab la base fdik int upp ila 3titiha 
// 0 kay3ni anaka rah lowercase w 1 uppercase donc nta hatgad ela 
//hasab algo lidrti
