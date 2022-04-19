#include "main.h"

/**
 * print_array - prints a array of n items
 *
 * @n: the number of items
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
		printf("%d, ", a[i]);
}
