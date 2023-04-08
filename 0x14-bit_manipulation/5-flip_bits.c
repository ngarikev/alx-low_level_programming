#include "main.h"
/**
 * flip_bits - tallys the number of bits needed
 * to get one number to another
 * @n: initial number
 * @m: next number
 * Return: number of bits from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int merit = n ^ m, numBits = 0;

	while (merit > 0)
	{
		numBits += (merit & 1);
		merit >>= 1;
	}
	return (numBits);
}
