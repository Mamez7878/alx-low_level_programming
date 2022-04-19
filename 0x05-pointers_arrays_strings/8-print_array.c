#include "main.h"

/**
 * print_array - prints a array of n items
 *
 * @n: the number of items
 * @a: an array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else if (i != (n - 1))
		{
			prinrf("%d", a[i]);
			printf(", ");
		}
	}
	printf("\n");
}
