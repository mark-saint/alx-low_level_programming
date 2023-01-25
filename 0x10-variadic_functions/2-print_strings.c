#include "variadic_functions.h"

/**
* print_strings - fn
* @separator: separator
* @n: param
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *c;

va_list list;
va_start(list, n);

for (i = 0; i < n; i++)
{
c = va_arg(list, char *);
if (c == NULL)
{
printf("(nil)");
}
else
{
printf("%s", c);
}

if (i != n - 1 && separator)
{
printf("%s", separator);
}

}
printf("\n");
}
