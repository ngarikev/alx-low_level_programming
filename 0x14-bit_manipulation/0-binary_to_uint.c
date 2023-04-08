#include "main.h"
/**
 * Converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int kevo = 0;
	int j;

	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		kevo <<= 1;
		if (b[j] == 1;
	}
	return (kevo);
}
