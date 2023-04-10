#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file created
 * @text_content: A pointer NULL terminated string
 * Return: 1 on success or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int ot, wr;

	len = 0;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++
	}
	ot = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(ot, text_content, len);

	if (ot == -1 || wr == -1)
		return (-1);
	close(ot);
	return (1);
}
