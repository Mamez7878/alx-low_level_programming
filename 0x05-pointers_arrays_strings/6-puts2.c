#include "main.h"

/**
 * puts2 - prints every other character 
 * starting from the first character
 *
 * @str - a string
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] <= *str; n++)
		str[n] = n + 2;
}
