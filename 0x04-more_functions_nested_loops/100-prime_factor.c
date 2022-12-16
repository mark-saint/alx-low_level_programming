#include <stdio.h>

/**
* main - sth
* Description: sth
* Return: sth
*/

int main(void)
{
unsigned long  i = 2;
unsigned long  num = 612852475143;
unsigned long  keep;

while (num > 1)
{
if (num % i == 0)
{
keep = i;
num /= i;
}
else
i++;
}
printf("%lu", keep);
putchar('\n');
return (0);
}


