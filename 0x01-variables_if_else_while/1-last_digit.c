#include <stdlib.h>
#include <time.h>
#include  <stdio.h>
#include <string.h>
/**
 * main - 'sth
 *
 * Description: 'sth'
 *
 * Return: (0)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

char strn[20];
sprintf(strn, "%d", n);

int last_digit = strn[strlen(strn) - 1] - '0';

if (n < 0)
last_digit *= -1;

if (last_digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);

if (last_digit == 0)
printf("Last digit of %d is %d and is 0\n", n, last_digit);

if (last_digit != 0 && last_digit < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);


return (0);
}
