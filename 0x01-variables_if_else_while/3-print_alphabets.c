#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i + 48);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');

	return 0;
}
