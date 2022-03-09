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
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
