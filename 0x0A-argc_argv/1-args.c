#include <stdio.h>
/**
 * main - check the code
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		}
		printf("%d\n", i - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
