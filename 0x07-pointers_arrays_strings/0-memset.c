#include "main.h"
/**
 * _memset - check the code
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
*s = b;
s++;
n--;
}
return (s);
}
