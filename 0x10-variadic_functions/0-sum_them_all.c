#include "variadic_functions.h"

/**
* sum_them_all - fn
* @n: param
* Return: sum
 * Description: sth
*/

int sum_them_all(const unsigned int n, ...)
{
int s = 0;
unsigned int i;
va_list ptr;

if (n == 0)
return (0);

va_start(ptr, n);

for (i = 0; i < n; i++)
{
s += va_arg(ptr, int);
}
va_end(ptr);
return (s);
}
