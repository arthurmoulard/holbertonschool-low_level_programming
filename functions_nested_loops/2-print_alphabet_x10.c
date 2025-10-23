#include "main.h"

void print_alphabet_x10(void)

{

	char A;
	char X;

	for (X = '0'; X <= '9'; X++)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
	_putchar(A);
		}
	_putchar('\n');
	}
}
