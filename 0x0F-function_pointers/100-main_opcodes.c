#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a name as is
 * @argc: name of the person
 * @argv: function
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	int i, bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;

	for (i = 0; i < bytes; i++)
		{
			if (i == bytes - 1)
			{
				printf("%02hhx\n", ptr[i]);
				break;
			}
			printf("%02hhx", ptr[i]);
		}
	return (0);
}
