#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
		putchar(i + 48);
	for (j = 65; j <= 90; j++)
		putchar(j + 48);
	return (0);
}
