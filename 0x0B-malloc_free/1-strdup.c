#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space
 *
 * @str: a string
 *
 * Return: the pointer or NULL if str is null
 */

char *_strdup(char *str)
{
	int i, l;
	char *s;

	for (l = 0; str[l] != '\0'; l++)
		;
	
	s = malloc((l + 1) * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	if (s == NULL || str == NULL)
		return (NULL);

	return (s);
}
