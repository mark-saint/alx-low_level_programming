#include <stdio.h>

/**
*
*main -sth
*
*Description sth
*
*Return (0)
*/

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'q' || x == 'e')
continue;
putchar(x);
}
putchar('\n');
return (0);
}
