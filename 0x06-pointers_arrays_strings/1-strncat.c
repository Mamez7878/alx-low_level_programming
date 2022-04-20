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
	int i, l = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i ++)
		dest[l + 1] = src[i];
	dest[l + i] = '\0';

	return dest;
}
