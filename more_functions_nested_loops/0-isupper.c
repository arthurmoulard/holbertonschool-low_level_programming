#include "main.h"
#include <stdio.h>

/**
 *main - check for uppercase character
 *
 *return 0: otherwise
 *return 1:uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
			}
	else
		return(0);
			}
