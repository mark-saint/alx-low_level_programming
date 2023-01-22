#include "function_pointers.h"

/**
* print_name - fn
* @name: param
* @f: fn pointer
 * Description: sth
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
