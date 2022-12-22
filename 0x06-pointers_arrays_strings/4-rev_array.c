#include "main.h"

/**
* reverse_array - sth
* @a: param
* @n: param
* Description: sth
*/

void reverse_array(int *a, int n)
{
int x, r, i = 0;

while (i < n)
{
r = n - i - 1;
x = a[i];
a[i] = a[r];
a[r] = x;
i++;
if (r < i)
break;
}

}
