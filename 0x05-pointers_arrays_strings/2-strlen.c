#include "main.h"

/**
 * _strlen - function
 * @s: param pointer
 * return last value
 */

int _strlen(char *s)
{
    int a;
    a=0;
    while (*s++)
    {
    a++;
    }

    return (a);
}