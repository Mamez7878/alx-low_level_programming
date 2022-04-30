#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: arg counter
 * @argv: arg holder
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int k;

	if (argc != 3 )
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", k);
	}

	return (0);
}
