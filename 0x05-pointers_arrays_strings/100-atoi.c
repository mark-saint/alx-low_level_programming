#include "main.h"

/**
 * _atoi - function
 * Description: sth
 * @s: param
 * Return: converted number
 */

int _atoi(char *s)
{
unsigned int b = 0;
int a = 1, count = 0, to_break = 0;


while (s[count])
{
if (s[count] == '-')
a *= -1;

while (s[count] >= 48 && s[count] <= 57)
{
b = b * 10 + (s[count] - 48);
count++;
to_break = 1;
}

if (to_break == 1)
break;

count++;
}
b *= a;

return (b);
}
