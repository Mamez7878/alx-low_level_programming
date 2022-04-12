#include "main.h"

/**
 * _islower - function identifies lowercase letters
 *
 * Return - Always 0 (succus)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
