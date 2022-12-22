#include "main.h"

/**
* _strncat - function
*@dest: sth
* @src: sth
*@n: num bytes
* Description: sth
* Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
b = 0;
while (dest[a] != '\0')
{

a++;
}
while (src[b] != '\0' && b < n)
{
dest[a + b] = src[b];
b++;
}
dest[a + b] = '\0';
return (dest);
}
