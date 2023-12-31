#include "main.h"

/**
 * read_textfile - read the text file
 * @filename: the name of the file
 * @letters: the size of letter
 * Return: w
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	r = read(fd, buf, letters);

	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
