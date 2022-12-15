#include <stdio.h>

/**
* main- sth
 * Description: sth
*Return: (0)
*/

int main(void)
{
int count;
unsigned long  a = 0, b = 1, sum_;

for (count = 0; count < 50; count++)
{
sum_ = a + b;
printf("%ld", sum_);

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
