#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	rd = read(fd, buf, letters);
	close(fd);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wr = 0;
	while (wr < rd)
	{
		ssize_t bytes_written = write(STDOUT_FILENO, buf + wr, rd - wr)
			if (bytes_wrirren <= 0)
			{
				free(buf);
				close(fd);
				return (0);
			}
			wr += bytes_written;
	}
	free(buf);
	close(fd);
	return (wr);
}

