#include "main.h"

/**
* _strlen - function
* Descrition: returns len of str
* @s: param pointer
* Return: last value of the loop
*/

int _strlen(char *s)
{
int a;
a=0;
while (*s++)
{
a++;
}

return (a);
}