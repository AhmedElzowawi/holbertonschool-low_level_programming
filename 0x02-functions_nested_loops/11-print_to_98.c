#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints if number is positive, 0 or negative
  * @n: charecter
  * Return: 0
  */
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
	for (i = n; i < 99; i++)
	{
		printf("%d, ", i);
	}
	}
}
