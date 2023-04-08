#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @n: number to represent binary
 */
void print_binary(unsigned long int n)
{
	int p, t;
	int kev = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (p = 63; p >= 0; c--)
	{
		t = n >> c;
		if (t & 1)
		{
			kev = 1;
			_putchar('1');
		}
		else if (kev == 1)
			_putchar('0');
	}
}
