#include "main.h"

/**
* _strstr - function
* @haystack: param
* @needle: param
* Description: sth
* Return: sth
*/
char *_strstr(char *haystack, char *needle)
{
int a = 0;
while (*haystack)
{

while (needle[a] == *haystack )
{
return (haystack);
a++;
}
haystack++;
a = 0;
}
return (NULL);
}
