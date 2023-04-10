#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read text fie to STDOUT
 * @filename: text file to read
 * @letters: number of letters to read and print
 * Return: Actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr;
	ssize_t rd;
	ssize_t ot;
	char *ch;

	ot = open(filename, O_RDONLY);
	if (ot == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	rd = read(ot, ch, letters);
	wr = write(STDOUT_FILENO, ch, rd);

	free(ch);
	close(ot);
	return (wr);
}
