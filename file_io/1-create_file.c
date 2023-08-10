#include "main.h"
/**
 * create_file - creat a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int w;
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
