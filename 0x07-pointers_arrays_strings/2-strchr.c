#include "main.h"
/**
 * _strchr - check the code
 * @s: parameter
 * @c: parameter
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;

for (s[i] != c)
{
i++;
}
if (s[i] == c)
{
return (s);
}
else
{
return (0);
}
}
