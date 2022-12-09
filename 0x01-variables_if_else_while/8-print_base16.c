#include <stdio.h>

/**
 * main -sth
 * Description: sth
 * Return: 0
 */

int main(void)
{
int a;
int b;

for (a = 0; a <= 9; a++)
{
putchar('0' + a);
}

for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}
putchar('\n');

return (0);
}
