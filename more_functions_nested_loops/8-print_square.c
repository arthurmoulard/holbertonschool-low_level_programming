#include "main.h"

void print_square(int size)
	int l, h;
{
	if (size <= 0)
	{
		_putchar('\n');
			}
	for (l = 0; l < 10; l++)
	{
		for (h = 0; h < 10; h++)
	{
		_putchar('#');
			}
	_putchar('\n');
		}

}
