#include "main.h"

/**
 * rot13 - check the code for
 * @s: parameter
 * Return: Always 0.
 */

void print_number(int n)
{
int i;
int j;
char l[] = "ABCDEFGHIJKL";
char n[] = "NOPQRSTUVWXY";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (s[i] == l[j])
{
s[i] = n[j];
}
}
}
return (s);
}
