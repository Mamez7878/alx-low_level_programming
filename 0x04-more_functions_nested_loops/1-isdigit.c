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
	if (c == 9 || c == 8 || c == 7 || c == 6 || c == 5 || c == 4 || c == 3 || c == 2 || c == 1 || c == 0)
		return (1);
	return (0);
}
