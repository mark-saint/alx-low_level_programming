#include "main.h"

/**
 * _strspn - function
 * @s: param
 * @accept: param
 * Return: sth
 * Description: sth
 */
unsigned int _strspn(char *s, char *accept)
{
int  a = 0, b = 0;
int counter = 0;

while (s[a] != '\0')
{
if (s[a] != 32)
{
while (accept[b] != '\0')
{
if (s[a] == accept[b])
counter++;
b++;
}
}
else
return (counter);
a++;
b = 0;
}
return (counter);
}
