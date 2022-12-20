#include "main.h"

/**
* _strlen - function
* Description: returns len of str
* @s: param pointer
* Return: last value of the loop
*/

int _strlen(char *s)
{
int a;
a = 0;
while (*s++)
a++;

return (a);
}

/**
 * rev_string - function
 * @s: param
 * Description: sth
 */

void rev_string(char *s)
{
int len;
int a = 0;
char c;
len = _strlen(s) - 1;

while (len >= 0)
{
c = s[a];
s[a] = s[len];
s[len] = c;
if (a > len)
break;

len--;
a++;
}

}