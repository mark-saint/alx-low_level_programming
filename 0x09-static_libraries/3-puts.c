#include "main.h"

/**
* _puts_recursion - function that puts
* @s: param
* Description: puts a string
*/
void _puts(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    s++;
    _puts(s);
}
