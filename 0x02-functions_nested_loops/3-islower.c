#include "main.h"

/**
 * _islower - function identifies lowercase letters
 *
 * @c: an alphabet
 *
 * Return: 0 not lowercase 1 for lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
