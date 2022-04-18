#include "main.h"

/**
 * print_rev - printing in reverse
 *
 * @s: a string
 */

void print_rev(char *s)
{
	int ldigit;

	ldigit = *s % 10;

	for (ldigit = 0; ldigit > *s; ldigit++)
		_putchar(ldigit + 0);
	_putchar('\n');
}
