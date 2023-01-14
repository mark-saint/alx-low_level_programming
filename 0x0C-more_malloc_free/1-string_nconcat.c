#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - fn
* @s1: param
* @s2: param
* @n: param
* Description: sth
* Return: sth
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new;
unsigned int i = 0, j = 0;
unsigned int x;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i])
i++;

while (s2[j])
j++;

if (j > n)
j = n;

new = malloc(sizeof(char) * (i + j + 1));
if (new == NULL)
return (NULL);

for (x = 0; x < i; x++)
new[x] = s1[x];

for (x = 0; x < j; x++)
new[x + i] = s2[x];

new[i + j] = '\0';
return (new);
}
