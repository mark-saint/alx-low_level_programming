#include <stdio.h>

/**
* main- sth
* Description: sth
*Return: (0);
*/

int main(void)
{
unsigned long a = 0, b = 1, sum_;
unsigned long high_a, low_a, high_b, low_b, high_sum, low_sum;
int count;

for (count = 0; count < 92; count++ )
{
sum_ = a + b;
printf("%lu", sum_);
putchar(',');
putchar(' ');

a = b;
b = sum_;

}
high_a = a % 100000000000;
low_a = a /  100000000000;
high_b = b % 100000000000;
low_b = b /  100000000000;

for (count = 92; count < 98; count++)
{

high_sum = high_a + high_b;
low_sum = low_a + low_b;

printf("%lu", low_sum);
printf("%lu", high_sum);

if (count != 97 )
{
putchar(',');
putchar(' ');
}
high_a = high_b;
low_a = low_b;
high_b = high_sum;
low_b = low_sum;

}

putchar('\n');
return (0);
}