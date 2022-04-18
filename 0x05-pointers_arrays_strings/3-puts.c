#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: a given string
 */

void _puts(char *str)
{
	int value;

	value = *str;

	_putchar(value + 48);
}
