#include "main.h"

/**
* _strncpy - function
* @dest: param
* @src: param
* @n: param
* Return: dest
* Description: copies
*/

char *_strncpy(char *dest, char *src, int n)
{
int a;
a = 0;
while (*(src + a) &&(a < n))
{
*(dest + a) = *(src + a);
a++;
}
while (a < n)
{
*(dest + a) = '\0';
a++;
}
return (dest);
}
