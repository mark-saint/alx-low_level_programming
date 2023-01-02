#include "main.h"
/**
 * _memcpy - memcpy
 * @dest: param
 * @src: param
 * @n: param
 * Description: function memcpy
 * Return: sth
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
a = 0;

while (a < n)
{
dest[a] = src[a];
a++;
}
return (dest);
}
