#include "main.h"

void more_numbers(void)
{
	int n
	int i

	for (n = 0; n < 10; i++)
	{
		for (i = 0; i < 15; j++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
