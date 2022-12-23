#include "main.h"

/**
* cap_string - function
* @x: param
* Description: sth
* Return: sth
*/
char *cap_string(char *x)
{
int a;
int i;
char b[] = ".\t\n!? ";
a = 0;

while (*(x + a))
{

if ((*(x + a) >= 'a') && (*(x + a) <= 'z'))
{
if (a == 0)
*(x + a) -= 32;
else
{
for (i = 0; i < 6; i++)
if (*(x + a - 1) == b[i])
*(x + a) -= 32;
}


}
a++;
}
return (x);
}
