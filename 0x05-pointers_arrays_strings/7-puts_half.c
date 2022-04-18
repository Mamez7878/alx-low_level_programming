#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @str: a string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i] / 2);
	_putchar('\n');
}
