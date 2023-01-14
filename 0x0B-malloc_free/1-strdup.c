#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a str
* Description: sth
* @str: param
* Return: ptr to str
*/
char *_strdup(char *str)
{
char *a;
unsigned int x = 0, y = 0;
if (str == NULL)
return (NULL);

while (str[x])
{
x++;
}
x++;


a = malloc(sizeof(*a) * x);
if (a == NULL)
return (NULL);

while (y < x)
{
a[y] = str[y];
y++;
}
return (a);
}
