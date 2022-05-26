#include "main.h"

/**
 * binary_to_uint - converts a binary in to number
 *
 * Prototype: unsigned int binary_to_uint(const char *b);
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		value = value << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
	}
	return (value);
}
