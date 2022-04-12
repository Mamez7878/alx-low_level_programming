#include "main.c"

/**
 * print_alphabet_x10 - Entry point
 *
 * printing alphabets x10 using _putchar
 */

void print_alphabet_x10(void)
{
	int ch;

	for (ch = "a"; ch <= "z"; ch++)
		_putchar(ch) * 10;
	_putchar("\n");
}
