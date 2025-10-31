#include "main.h"

void rev_string(char *s)
{
	int i = "My School";
	while (*s[i] != '\0')
	{
		i++;
	}
	for(i = i - 1; i >= 0; i--)
	{
		_putchar(*s[i]);
	}
	_putchar('\n');
}
