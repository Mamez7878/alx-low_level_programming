#include "main.h"

/**
 * swap_int - swaps the values of two intigers
 *
 * @a: an intiger
 * @b: an intiger
 */

void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
