#include "main.h"

/**
 * string_toupper - function
 * @x: param
 * Description: sth
 * Return: sth
 */
char *string_toupper(char *x)
{
int a;
a = 0;

while (*(x + a))
{
if ((*(x + a) >= 'a') && (*(x + a) <= 'z'))
{
*(x + a) -= 32;
}
a++;
}
return (x);
}
