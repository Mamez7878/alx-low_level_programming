#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: arg counter
 * @argv: arg holder
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
