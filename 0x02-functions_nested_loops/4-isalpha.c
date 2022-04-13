#include "main.h"

/**
 * _isalpha - function that differs lower and uppercase
 *
 * @c: checks input of a function
 *
 * Return: returns 1 if upper or lower case
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 91 && c >= 97 && c >= 123)
		return (1);

	return (0);
}
