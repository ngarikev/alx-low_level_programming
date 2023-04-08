#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 if system is big or 1 if its little
 */
int get_endianness(void)
{
	int integer = 1;
	char *octet = (char *)&integer;

	if (*octet == 1)
		return (1);
	return (0);
}
