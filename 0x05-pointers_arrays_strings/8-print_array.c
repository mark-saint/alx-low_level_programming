#include "main.h"
#include <stdio.h>

/**
* print_array - function
* @a: param
* @n: param
* Description: sth
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
    printf("%d", a[i]);
    if (i != n - 1)
    {
        putchar(' ');
        putchar(',');
    }

}
    putchar('\n');
}
