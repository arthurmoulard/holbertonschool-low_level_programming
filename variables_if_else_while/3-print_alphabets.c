#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alphabet = 'a';

    while (alphabet <= 'z')
    {
        putchar(alphabet);

        alphabet++;
    }
    char Alphabet = 'A';

    while (Alphabet <= 'Z')
    {
	    putchar(Alphabet);

	    Alphabet++;
    }
    
    putchar('\n');
    return (0);
}
