#include "main.h"

/**
 * print_last_digit - Printing the last digit of a given number
 *
 * @ch: a given number
 *
 * Return: always ch
 */

int print_last_digit(int ch)
{
	int ldigit;

	if (ch < 0)
		ldigit = (ch % 10) * -1;
	else
		ldigit = ch % 10;

	_putchar(ldigit + '0');
	return (ldigit);
}
