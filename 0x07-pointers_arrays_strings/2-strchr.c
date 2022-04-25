#include "main.h"

/**
 * *_strchr - locates a char in string
 *
 * @s: a string
 * @c: the character to be located
 *
 * Return: a pointer to first occurance of 
 * 	c and NULL if there is not
 */

char *_strchr(char *s, char c)
{
	for (; s* != '\0'; s++)
	{
		if (s* == c)
		{
			return (s);
		}
	}
	
	if (*s == c)
		return (s);

	return ('\0');
}
