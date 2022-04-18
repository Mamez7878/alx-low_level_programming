#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @str: a string
 */

void puts_half(char *str)
{
	int le, n, i;

	for (le = 0; str[le] != '\0'; le++)
		;
	n = (le - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
