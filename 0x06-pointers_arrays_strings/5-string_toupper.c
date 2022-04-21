#include "main.h"

/**
 * *string_toupper - changes letters to the uppercase
 *
 * @s: a string
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int i;

	while (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}

	return (s);
}
