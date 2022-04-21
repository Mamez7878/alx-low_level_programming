#include <stdio.h>

/**
 * main - a function
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (i >= 58 && i <= 96)
			continue;
		putchar(i);
	}
	putchar('\n');

	return (0);
}
