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
	int len = strlen(text_content);

	if (filename == NULL)
	return (-1)
	if (text_content == NULL)
	return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	w = write (fd,text_content,len)
	if (w == NULL || fd == NULL)
	return (-1);
	close(fd);
	return (1);
}