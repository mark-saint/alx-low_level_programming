#include <stdio.h>

/**
 * main- sth
 * Description: sth
 *Return (0);
 */

int main(void)
{
unsigned long a = 0, b = 1, sum_;
int count;
for (count = 0; count <= 100; count++)
{
sum_ = a + b;
printf("%lu", sum_);
if (count != 98)
{
putchar(',');
putchar(' ');
}
a = b;
b = sum_;
}
putchar('\n');
return (0);
}