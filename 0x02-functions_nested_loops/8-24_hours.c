#include "main.h"

/**
 * jack_bauer - prints like an hour and minte
 */

void jack_bauer(void)
{
	int hr, mi;

	for (hr = 0; hr < 24; hr++)
	{
		for (mi = 0; mi < 60; mi++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((mi / 10) + 48);
			_putchar((mi % 10) + 48);
			_putchar('\n');
		}
	}
}
