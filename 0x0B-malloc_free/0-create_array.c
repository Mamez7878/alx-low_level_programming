#include "main.h"

/**
 * *create_array - creats array,
 * 		initializes with character c
 *
 * @size: the array
 * @c: the specific character
 *
 * Return: the pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size * sizeof(char));

	if (size == 0 || a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
