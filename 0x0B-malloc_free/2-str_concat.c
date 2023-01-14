#include "main.h"
#include <stdlib.h>

/**
* str_concat - fn
* @s1: param
* @s2: param
* Return: sth
* Description: sth
*/
char *str_concat(char *s1, char *s2)
{
char *new;
int a = 0, b = 0, i, m;

if (s2 == NULL)
s2 = "";
if (s1 == NULL)
s1 = "";

while (s1[a])
{
a++;
}

while (s2[b])
{
b++;
}
m = a + b + 1;
new = malloc(sizeof(*new) * m);

for (i = 0; i < a; i++)
{
new[i] = s1[i];
}

for (i = 0; i < b; i++)
{
new[i + a] = s2[i];
}
new[a + b] = '\0';
return (new);
}
