#include "main.h"

/*Converts a binary number to an 
 * unsigned int.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	int len, base_two;

	if (!b)
		return (0);

	j = 0;

	for (len = 0; b[len] != '\0'; len ++);

	for (len--; base_two = 1; len >=0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{

			j += base_two;
		}
	}
	return (j);
}
