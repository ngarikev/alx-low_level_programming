#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: number to find the bit
 * Return: value of index or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsiged long int) * 8))
		return (-1);
	return (n >> index & 1);
}
