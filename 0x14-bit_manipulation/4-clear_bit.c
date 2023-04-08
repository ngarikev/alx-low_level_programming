#include "main.h"
/**
 * clear_bit - set the value of a given bit to 0
 * @n: the number to change the value of
 * @index: index of the bit to change
 * Return: 1 or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
