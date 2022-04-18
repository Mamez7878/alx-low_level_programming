#include "main.h"

/**
 * rev_string - reversing a string
 *
 * @s: a string
 */

void rev_string(char *s)
{
	int n, i, j;
	char c1, c2;

	for (n = 0; s[n] != '\0'; n++)
		;

	j = n - 1;
	i = 0;

	while (j > i)
	{
		c1 = s[i];
		c2 = s[j];
		s[i] = c2;
		s[j] = c1;
		j--;
		i++;
	}
}
