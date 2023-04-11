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
	int fd;
	ssize_t rd;
	ssize_t wr;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(buf) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (fd == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (wr);
}
