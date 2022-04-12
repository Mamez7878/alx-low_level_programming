#include "main.h"

/**
 * main - Entry point
 *
 * printing '_putchar' with out using printf or puts
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
