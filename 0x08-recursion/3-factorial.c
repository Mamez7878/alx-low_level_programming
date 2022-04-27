#include "main.h"
#include <stdio.h>

/**
 * factorial - finds the factorial of a number
 *
 * @n: a number
 *
 * Return: -1 if less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1);
}
