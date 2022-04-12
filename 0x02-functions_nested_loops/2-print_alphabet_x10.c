#include "main.c"

/**
 * print_alphabet_x10 - Entry point
 *
 * printing alphabets x10 using _putchar
 */

void print_alphabet_x10(void)
{
	int line, ch;
	
	for (line = 0; line < 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
