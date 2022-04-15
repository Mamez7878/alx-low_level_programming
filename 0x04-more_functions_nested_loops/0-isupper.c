#include "main.h"

/**
 * _isupper - checkes if the given letter is uppercase
 *
 * @c: a number
 *
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
