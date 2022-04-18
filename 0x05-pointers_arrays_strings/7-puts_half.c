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
	{
		i = i / 2;
		_putchar(str[i]);
	}
	_putchar('\n');
}
