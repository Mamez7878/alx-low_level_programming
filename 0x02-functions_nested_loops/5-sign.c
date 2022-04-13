#include "main.h"

/**
 * print_sign - printing the sign of a given number
 *
 * Return - return 1 if positive, 0 if zero and
 * -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
