#include "main.h"

/**
 * pr_int - check the code
 * @n: parameter
 * Return: Always 0.
 */
void pr_int(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
        pr_int(n / 10);
    _putchar((n % 10) + '0');
}
