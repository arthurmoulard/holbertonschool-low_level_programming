#include "main.h"

/**
* print_line- ecris des lignes pour chaque unite
* @n: tres compliquer la task
* Return: Always 0 (Success)
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		for (i = 0; i < n; i++)
		{
		_putchar(' ');
		}
		_putchar('\\');
	_putchar('\n');
	}
}
