#include "main.h"

/**
 * rev_string - reversing a string
 *
 * @s: a string
 */

void rev_string(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;

	for (n--; n >= 0; n--)
		s[n] = *s;
}
