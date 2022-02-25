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
	int prev = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc >= 2)
	{
		for (i = 1; argv[i] != NULL; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			prev += atoi(argv[i]);
		}
		printf("%d\n", prev);
	}
	return (0);
}
