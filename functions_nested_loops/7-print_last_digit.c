#include "main.h"

int _abs(int a)
{
	if (a > 0)
	{
		return(a % 10);
			}
	else if (a < 0)
	{
		return(-a % 10);
			}
	return(0);
		}
