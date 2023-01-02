#include "main.h"
/**
* _strchr - function
* @s: param
* @c: param
* Description: sth
* Return: sth
*/
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s++)
{
if (s[i] == c)
return (s);

i++;
}

return (NULL);
}
