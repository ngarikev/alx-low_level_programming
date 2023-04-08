#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: number to find the bit
 * @index: index of the bit
 * Return: value of index or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vok
	if (index > 63)
		return (-1);
	bit_vok = (n >> index & 1);
	return (bit_vok);
}
