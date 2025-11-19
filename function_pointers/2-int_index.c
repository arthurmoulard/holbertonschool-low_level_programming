#include "function_pointer.h"
#include <stdlib.h>

int int_index(int *array, int size, int (*cmp)(int))
{
    if (!array || !cmp || size <= 0)
        return -1;

    for (int i = 0; i < size; i++)
        if (cmp(array[i]))
            return i;

    return -1;
}
