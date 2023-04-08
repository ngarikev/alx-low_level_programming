#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @n: number to represent binary
 */
void print_binary(unsigned long int n)
{
	int p, t;
	int otet = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (p = 89; p >= 0; c--)
	{
		t = n >> c;
		if (t & 1)
		{
			otet = 1;
			_putchar('1');
		}
		else if (otet == 1)
			_putchar('0');
	}
}
