#include "main.h"

/**
* _isalpha -sth
* @c: sth
* Description: sth
* Return: sth
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else if(c >= 'a' && c <= 'z')
return (0);
else
return (-1);

}
