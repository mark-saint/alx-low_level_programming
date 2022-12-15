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

for (count = 0; count < 92; count++)
{
    sum_ = a + b;
    printf("%lu, ", sum_);

    a = b;
    b = sum_;
}


high_a = a % 10000000000;
low_a = a /  10000000000;
high_b = b % 10000000000;
low_b = b /  10000000000;

for (count = 92; count < 98; count++)
{
high_sum = high_a + high_b;
low_sum = low_a + low_b;

if (high_sum > 10000000000)
{
low_sum += 1;
high_sum %= 10000000000;
}
if (low_sum != 0)
printf("%lu", low_sum);
printf("%lu", high_sum);

if (count != 97)
printf(", ");

high_a = high_b;
low_a = low_b;
high_b = high_sum;
low_b = low_sum;
}
putchar('\n');
return (0);
}
