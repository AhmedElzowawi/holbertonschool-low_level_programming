#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[i]) + atoi(argv[i]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	return (0);
}
