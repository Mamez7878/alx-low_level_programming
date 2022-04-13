#include "main.h"

/**
 * _abs - Finding the absolute value of a given number
 * 
 * @n: a given number
 *
 * Return: Always n
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}
