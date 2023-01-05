#include "main.h"

/**
* _strlen_recursion - function
* @s: param
* Return: len of a string
* Description: returns len of a string
*/
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
s++;
i = i + _strlen_recursion(s);
}

return (i);
}
