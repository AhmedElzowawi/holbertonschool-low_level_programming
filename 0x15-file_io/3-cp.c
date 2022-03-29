#include "main.h"
/**
 * main - check the code
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0.
 */
 void cp(const char *from, const char *to);
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
/**
 * cp - check the code
 * @from: parameter
 * @to: parameter
 * Return: Always 0.
 */
void cp(const char *from, const char *to)
{
	char buf[1024];
	int fileR, fileW, size;

	fileR = open(from, O_RDONLY);
	if (fileR == -1 || from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	size = read(fileR, buf, 1024);

	fileW = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileW == -1 || to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	write(fileW, buf, size);

	if (close(fileR) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileR);
		exit(100);
	}

	if (close(fileW) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileW);
		exit(100);
	}
}
