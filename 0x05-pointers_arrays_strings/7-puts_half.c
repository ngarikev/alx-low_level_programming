#include "main.h"
/**
 * puts_half - prints the second half of a string, followed by a newline
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = n; i < len; i++)
			putchar(str[i]);
	}
	else
	{
		for (i = n + 1; i < len; i++)
			putchar(str[i]);
	}
	putchar('\n');
}
