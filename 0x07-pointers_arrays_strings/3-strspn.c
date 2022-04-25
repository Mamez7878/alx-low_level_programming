#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: a string
 * @accept: substructing prefix
 *
 * Return: the number of bytes in the inital segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 1;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
		}
		if (f == 1)
			break;
	}
	return (i);
}
