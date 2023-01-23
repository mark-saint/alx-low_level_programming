#include "3-calc.h"
#include <string.h>

/**
* get_op_func - confusing fn
* @s: param
* Return: sth
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

for (i = 0;; i++)
{
if (strcmp(ops[i].op, s) == 0)
{
break;
}
}
return (ops[i].f);
}
