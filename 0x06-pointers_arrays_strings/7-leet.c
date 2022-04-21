#include <stdio.h>

/**
 * *leet - a function that incodes into 1337
 *
 * @s: a string
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, c;

	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	for (c = 0; s[c] != '\0'; c++)
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == sl[i] || s[c] == ul[i])
			{
				s[c] = n[i];
				break;
			}
		}
	}
	return (s);
}
