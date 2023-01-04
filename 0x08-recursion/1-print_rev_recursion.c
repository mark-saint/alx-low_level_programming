#include "main.h"

/**
* _print_rev_recursion - reverse a str
* @s: param
* Description: function
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
