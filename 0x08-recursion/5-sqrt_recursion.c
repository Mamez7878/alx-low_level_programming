#include "main.h"
#include <stdio.h>

/**
 * square_root - finds the square root of a number
 *
 * @a: the number
 * @b: the square root of a
 *
 * Return: b or -1
 */

int square_root(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (square_root(a, b + 1));
}

/**
 * _sqrt_recursion - finds the square of a number
 *
 * @n: the number
 *
 * Return: the square root or -1
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
