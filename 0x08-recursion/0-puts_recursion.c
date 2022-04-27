#include "main.h"
#include <stdio.h>

/**
 * _puts_recusion - prints a string
 *
 * @s - a poiner of a string
 */

void _puts_recursion(char *s)
{
	int i;

	if (s[i] > 0)
		return;

	i++;

	_puts_recursion(_putchar(s[i]));
}
