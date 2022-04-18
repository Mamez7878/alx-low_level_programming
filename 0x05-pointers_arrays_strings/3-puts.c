#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: a given string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 48);
		str++;
	}
	_putchar('\n');
}
