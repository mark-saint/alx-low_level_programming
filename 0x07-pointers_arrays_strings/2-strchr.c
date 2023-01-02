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
if (c == '\0')
return (s);
while (s++)
{
if (*s == c)
return (s);

}

return (NULL);
}
