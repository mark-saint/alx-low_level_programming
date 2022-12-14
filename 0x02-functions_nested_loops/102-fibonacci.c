#include <stdio.h>

/**
* main- sth
*Ffire
*/

int main(void)
{
int count;
int a, b, sum_;

for (count = 0; count <50; count ++)
{
sum_ = a + b;
printf("%d", sum_);

a = b;
b = sum_;
if (count != 49)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
