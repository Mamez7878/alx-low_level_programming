#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument counter
 * @argv: argument holder
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
		printf("%d\n", i);

	(void)*argv;
	return (0);
}
