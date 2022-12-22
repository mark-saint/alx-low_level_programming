#include <stdio.h>

/**
* _strcat - concatenate strings
* Description: sth
* @dest: sth
* @src: sth
* Return: concatenated stings
*/

char *_strcat(char *dest, char *src)
{
char *a = dest;
while (*dest != '\0')
dest++;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (a);
}
