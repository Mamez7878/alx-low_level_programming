#include "main.h"

/**
 * *_memcpy - copies a memory area
 *
 * @dest: another memory area destination
 * @src: memory area
 * @n: number of bytes
 *
 * Return: dest
 */

*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (*dest);
}
