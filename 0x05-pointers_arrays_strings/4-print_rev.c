#include "main.h"


/**
 * _strlen - function
 * Description: returns len of str
 * @s: param pointer
 * Return: last value of the loop
 */

int _strlen(char *s)
{
int a;
a = 0;
while (*s++)
a++;

return (a);
}

/**
 * print_rev - function2
 * Description: sth
 * @s: param
 */

void print_rev(char *s)
{
int len;
len = _strlen(s) - 1;

while (len >= 0)
{
_putchar(s[len]);
len--;
}
_putchar('\n');
}
