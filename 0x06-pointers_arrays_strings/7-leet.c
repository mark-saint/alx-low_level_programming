#include "main.h"

/**
*leet - function
* Return: sth
* @w: param
* Description: sth
*
*/

char *leet(char *w)
{
int a = 0, b = 0;

char x[] = "aAeEoOtTlL";
char y[] = "4433007711";


while (*(w + a))
{
for (b = 0; b <= 9; b++)
if (x[b] == w[a])
w[a] = y[b];
a++;
}
return (w);
}
