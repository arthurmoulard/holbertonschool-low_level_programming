#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    char alphabet = 'a';

    while (alphabet <= 'z')
    {
        putchar(alphabet);

        alphabet++;
    }
    char alphabet = 'A';

    while (alphabet <='Z')
    {
	    putchar(alphabet);

	    alphabet++;
    }
    
    putchar('\n');
    return (0);
}
