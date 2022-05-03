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

	if (str == NULL)
		return (NULL);

	for (l = 0; str[l] != '\0'; l++)
		;

	s = malloc((l + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s);
}
