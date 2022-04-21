#include <stdio.h>

/**
 * main - a function
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 91; i < 123; i++)
	{
		if (i == 113 && i == 101)
			continue;
		putchar(i);
	}

	return (0);
}
