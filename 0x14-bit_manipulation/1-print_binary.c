#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @n: number to represent binary
 */
void print_binary(unsigned long int n)
{
	int p, tally = 0;
	unsigned long int new;

	for (p = 63; p >= 0; p--)
	{
		new = n >> p;
		if (new & 1)
		{
			_putchar('1');
			tally++;
		}
		else if (tally)
			_putchar('0');
	}
	if (!tally)
		_putchar('0');
}
