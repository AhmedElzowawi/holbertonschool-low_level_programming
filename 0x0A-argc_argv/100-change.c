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
	int j = 0; /* minimum number of coins */
	int money = atoi(argv[1]);
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; money != 0; i++)
		{
			
				j += money / values[i];
				money %= values[i];
			
		}
		printf("%d\n", j);
	}
	return (0);
}
