#include "main.h"
/**
 * append_text_to_file - append txt to file
 * @filename: file name
 * @text_content: file content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, fd, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
		len = strlen(text_content);
	fd = open(filename, O_WRONLY);
	w = write(fd, text_content, len);
	if (fd == NULL || w == NULL)
		return (-1);

	close(fd);
	return (1);
}
