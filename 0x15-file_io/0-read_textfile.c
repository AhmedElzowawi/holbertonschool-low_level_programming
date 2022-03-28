#include "main.h"
/**
 * read_textfile - check the code
 * @filename: parameter
 * @letters: parameters
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	read(file, buf, letters);
	write(STDOUT_FILENO, buf, letters);
	close(file);
	free(buf);
		return (letters);
}
