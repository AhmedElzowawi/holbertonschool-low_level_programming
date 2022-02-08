#include "main.h"
#include <stdio.h>

/**
  * print_last_digit - prints if number is positive, 0 or negative
  * @n: charecter
  * Return: 0
  */
int print_last_digit(int n)
{
	int i = n;
	 i = n % 10;

	_putchar(i + '0');
	return (i);
}
