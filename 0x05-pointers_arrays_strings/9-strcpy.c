#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies string 1 to the other
 *
 * @dest: the first string
 * @src: the second string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (*dest);
}
