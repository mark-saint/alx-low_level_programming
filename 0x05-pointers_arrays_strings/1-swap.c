#include "main.h"

/**
 * swap_int - function
 * Description: swaps
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
    int c;
    c = *a;

    *a = *b;
    *b = c;
}