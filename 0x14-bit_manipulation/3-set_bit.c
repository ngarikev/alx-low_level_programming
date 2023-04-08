#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: given number to manipulate
 * @index: index of the bit to set begin from 0
 * Return: 1 or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
