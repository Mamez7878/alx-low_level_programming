#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * A C code exicutes the last digit of
 * a given number and compare it with the number 5 and 6
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ldigit = n % 10;

	if (ldigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	else if (ldigit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	else
		printf("Last digit of %d is %d and is 0\n", n, ldigit);

	return (0);
}
