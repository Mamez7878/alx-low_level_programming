#include "main.h"
#include <stdiio.h>

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
	int n;

	if (y < 0)
		return (-1);

	else if (x == 0)
		return (1);
	
	else if (y % 2 == 0)
	{
		n = _pow_recursion(x, y / 2);
		return (n * n);
	}
	else
		return (x * _pow_recusion(x, y - 1));
}
