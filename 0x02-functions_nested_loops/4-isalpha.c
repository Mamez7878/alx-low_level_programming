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
	if (c >= 65 && c >= 90 && c >= 97 && c <= 122)
		return (1);

	return (0);
}
