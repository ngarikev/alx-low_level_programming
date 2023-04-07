#include "main.h"
/**
 * Converts a binary number to an
 * unsigned int.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == Null)
		return (0);
	for (int j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0' || b[j] == '1')
		{
			value <<= 1;
			value += b[j] - '0';

		else
			return (0);
		}
	}
	return (value);
}
