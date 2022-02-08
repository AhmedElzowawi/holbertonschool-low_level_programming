#include "main.h"

/**
  * print_to_98 - prints if number is positive, 0 or negative
  * @n: charecter
  * Return: 0
  */
void print_to_98(int n)
{
	for (int i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
}
