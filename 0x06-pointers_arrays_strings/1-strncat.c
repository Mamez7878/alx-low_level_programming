#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 *
 * @dest: string 1
 * @src: string 2
 * @n: bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > j; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (n > 0)
		dest[i] = '\0';

	return (dest);
}
