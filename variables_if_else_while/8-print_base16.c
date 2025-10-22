#include<stdio.h>
#include<stdlib.h>
/**
* main - A program that prints all the numbers of base 16.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;
	int num;

	for (num = '0'; num <= '9')
		putchar(num + '0');

	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
