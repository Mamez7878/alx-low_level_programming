#include <stdio.h>

/**
 * main - Entry point
 *
 * Printing alphabet in small
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
