#include "main.h"

/**
*rot13 - function
 * @w: param
 * Description: sth
 * Return: sth
*
*/

char *rot13(char *w)
{
int a = 0, b;
char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


while (*(w + a))
{
while (b < 52)
{
if (x[b] == *(w + a))
{
*(w + a) = y[b];

break;
}
b++;
}

a++;
b = 0;
}
return (w);
}
