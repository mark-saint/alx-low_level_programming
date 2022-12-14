#include <stdio.h>

/*
 * main- sth
 * Description: sth
 *
 */


int main(void)
{
    unsigned long a = 0, b = 1, sum_;
    int count;

    for (count = 2; count <= 98; count++)
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

}