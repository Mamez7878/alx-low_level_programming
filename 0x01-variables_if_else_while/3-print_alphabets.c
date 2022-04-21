#include <stdio.h>

int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(i);
		i++;
	}

	return 0;
}
