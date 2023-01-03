#include "main.h"

/**
* _strpbrk - function
* @s: param
* @accept: param
* Description: sth
* Return: sth
*/

char *_strpbrk(char *s, char *accept)
{
int a = 0;
while (*s)
{
while (accept[a] != '\0')
{
if (*s == accept[a])
return (s);
a++;
}
s++;
a = 0;
}
return (NULL);
}
