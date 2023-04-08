#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @n: number to represent binary
 */
void print_binary(unsigned long int n)
{
	int index, mara = 0;
	unsigned long int sasa;

	for (index = 1; index >= 0; index--)
	{
		sasa = n >> index;
		if (sasa & 1)
		{
			_putchar('1');
			mara++
		}
		else if (mara)
			_putchar('0')
	}
	if (!mara)
		_putchar('0')
}
