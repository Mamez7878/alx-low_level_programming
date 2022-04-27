#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x^y
 *
 * @x: base number
 * @y: the exponent
 *
 * Return: x^y or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y % 2 == 0)
	{
		int n = _pow_recursion(x, y / 2);

		return (n * n);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
