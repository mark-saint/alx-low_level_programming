#include "variadic_functions.h"

/**
* print_numbers - fn
* @separator: comma
* @n: num args
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
va_start(ptr, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, int));
if (i != n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(ptr);
}
