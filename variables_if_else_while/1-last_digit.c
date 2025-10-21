#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n,der;
der = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
       	if (der > 5)
	{
		printf ("der of %d and is greater than 5\n", n, der);
	}
	else if (der = 0)
	{
		printf ("der of %d and is 0\n", n, der);
	}
	else (der < 6)(der ! 0)
	{
		printf ("der of %d and is less than 6 and not 0\n", n, der);
	}
	return (0);
}
