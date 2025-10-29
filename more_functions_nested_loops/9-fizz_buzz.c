#include "main.h"
#include <stdio.h>
int main(void)
{
	int a;

	for(a = 1; a < 101; a++)
	{
		printf("%d", a);
		if((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		if((a % 5 == 0) && (a % 3 != 0))
		{
			printf("Buzz");
		}
		if((a % 3 == 0) && (a % 5 != 0))
		{
			printf("Fizz");
		}
		putchar(' ');
			}
	putchar('\n');
	return(0);
}
