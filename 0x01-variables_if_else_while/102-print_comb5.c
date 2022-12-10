#include <stdio.h>

/**
 * main - sth
 * Description: sth
 * Return: sth
 */

int main(void)
{
int a;
int b;


for (a = 0; a <= 99; a++)
for (b = a + 1; b <= 99; b++)

{


putchar('0' + (a / 10) % 10);
putchar('0' + a % 10);

putchar(' ');
putchar('0' + (b / 10) % 10);
putchar('0' + b % 10);

putchar(',');
putchar(' ');
}
putchar('\n');
return (0);

}

