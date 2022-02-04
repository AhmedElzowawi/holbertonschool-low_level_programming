#include <stdio.h>

/**
  * main - prints if number is positive, 0 or negative
  * Return: 0
  */
int main(void)
{
	int firstDigit, secondDigit, thirdDigit;
	int comma = ',';
	int space = ' ';

	for (firstDigit = '0'; firstDigit <= '9'; ++firstDigit)
	{
		for (secondDigit = '0'; secondDigit <= '9'; ++secondDigit)
		{
			if (firstDigit < secondDigit)
			{
				for (thirdDigit = '0'; thirdDigit <= '9'; ++thirdDigit)
				{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(thirdDigit);
				}

					if (firstDigit != '8' || (firstDigit == '8' && secondDigit != '9'))
				{
						putchar(comma);
						putchar(space);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
