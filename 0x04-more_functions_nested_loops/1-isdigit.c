#include "main.h"

/**
 * _isdigit - checkes for digit found b/n 0 - 9
 *
 * @c: a digit
 *
 * Return: 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
