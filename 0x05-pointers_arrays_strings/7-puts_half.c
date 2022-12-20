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
a = 0;
while (*s++)
{
a++;
}

return (a);
}

/**
 * puts_half - function
 * Description: sth
 * @str: sth
 */
void puts_half(char *str)
{
int len, a;
len = _strlen(str);

if ((len % 2) == 0)
a = len / 2;
else
a = (len + 1) / 2;

while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
