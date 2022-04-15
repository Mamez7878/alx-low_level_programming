#include "main.h"

/**
 * more_numbers - prints numbers 0 - 9 x10
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((x % 10) + 48);
		}
		_putchar('\n');
	}
}
