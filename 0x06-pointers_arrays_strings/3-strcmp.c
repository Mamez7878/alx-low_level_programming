#include "main.h"

/**
 * _strcmp - compares two intigers
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && j == 0; i++)
		j = s1[i] - s2[i];
	
	return (j);
}
