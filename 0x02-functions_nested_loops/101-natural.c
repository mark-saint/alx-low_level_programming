#include <stdio.h>

/**
*main -sth
*DEscritopin: sth
*/


int main(void)
{
int a = 0;
int sum_ = 0;

for (a = 0; a < 1024; a++)
{
if ((a % 3) == 0 || (a % 5) == 0)
{
sum_ += a;
}
}
printf("%d\n", sum_);
return (0);
}

