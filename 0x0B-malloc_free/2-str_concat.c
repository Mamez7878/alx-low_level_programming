#include "main.h"

/**
 * *str_concat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: the pointer or null in failure
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, i, j;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	
	for (a = 0; s1[a] != '\0'; a++);
	for (b = 0; s2[b] != '\0'; b++);

	s = malloc((a *sizeof(char)) + ((b + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		s[i] = s2[j];
	s[i] = '\0';

	return (s);
}


