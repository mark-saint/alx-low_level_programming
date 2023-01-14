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
int a = 0, b = 0, i = 0;

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

printf("%d\n", a);
printf("%d\n", b);
new = malloc(sizeof(*new) * (a + b + 1));

*new = *s1;
printf("%s", s1);
while (i < b)
{
new[i] = s2[i];
i++;
}
new[i + 1] = '\0';
return (new);
}
