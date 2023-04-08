#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int merit = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		merit = 2 * merit + (b[j] - '0');
	}
	return (merit);
}
