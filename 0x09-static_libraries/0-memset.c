#include "main.h"

/**
* _memset - memset function
* @s: param
* @b: param
* @n: param
* Description: memset function
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int a;
    a = 0;
    while (a < n)
    {
        s[a] = b;
        a++;
    }
    return (s);
}
